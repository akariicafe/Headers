@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NNMKSyncEndpoint : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *endpointQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resendingQueue;
@property (retain, nonatomic) NSMutableDictionary *datesForIDSIdentifiersScheduledToBeResent;
@property (retain, nonatomic) NSMutableDictionary *lastResendIntervalByIDSIdentifier;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resendObjectsForIDSIdentifier:(id)a0;
- (void)enqueueIDSIdentifierForResend:(id)a0 atDate:(id)a1 silent:(BOOL)a2;
- (void)enqueueIDSIdentifiersForResend:(id)a0;
- (void)resendReadyIDSIdentifiers;
- (void)resendAllIDSIdentifiers;
- (unsigned long long)newResendIntervalForPreviousResendInterval:(unsigned long long)a0 errorCode:(long long)a1;
- (void)dequeueIDSIdentifierForResend:(id)a0;

@end
