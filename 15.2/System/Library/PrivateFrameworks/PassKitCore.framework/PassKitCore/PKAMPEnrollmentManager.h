@class PKInAppPaymentService, NSMutableDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface PKAMPEnrollmentManager : NSObject {
    PKInAppPaymentService *_service;
    NSMutableDictionary *_promiseMap;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockObservers;
    NSHashTable *_observers;
}

+ (id)sharedManager;

- (void)canEnrollPaymentPass:(id)a0 completion:(id /* block */)a1;
- (id)performCanEnrollPaymentPass:(id)a0;
- (id)performEnrollPaymentPass:(id)a0 isDefault:(BOOL)a1;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)enrollmentStatusForPaymentPass:(id)a0 completion:(id /* block */)a1 progress:(id /* block */)a2;
- (void)enrollPaymentPass:(id)a0 isDefault:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldOfferAMPEnrollmentForPaymentPass:(id)a0;
- (void)registerObserver:(id)a0;
- (id)_bag;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterObserver:(id)a0;

@end
