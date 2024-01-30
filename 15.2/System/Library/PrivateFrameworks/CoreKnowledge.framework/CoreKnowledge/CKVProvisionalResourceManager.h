@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface CKVProvisionalResourceManager : NSObject {
    NSString *_resourceName;
    NSObject<OS_dispatch_queue> *_activationQueue;
    NSObject<OS_dispatch_queue> *_expirationQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    double _expirationInterval;
    BOOL _isActive;
    id /* block */ _activationBlock;
    id /* block */ _deactivationBlock;
    long long _operationsInProgress;
}

@property (retain) NSDate *expirationDate;

- (void)_setExpirationTimer;
- (id)initWithResourceName:(id)a0 lifespan:(double)a1 activationBlock:(id /* block */)a2 deactivationBlock:(id /* block */)a3 serializeOperations:(BOOL)a4;
- (BOOL)isActive;
- (long long)activateWithError:(id *)a0 operationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (long long)deactivateWithError:(id *)a0;
- (id)init;

@end
