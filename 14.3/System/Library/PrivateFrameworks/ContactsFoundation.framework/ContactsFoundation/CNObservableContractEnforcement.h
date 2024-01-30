@class NSString, CNObservableContractTerminationContext;

@interface CNObservableContractEnforcement : NSObject <CNObserver> {
    unsigned long long _state;
    CNObservableContractTerminationContext *_terminationContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldSwizzleNilResults;
+ (id)os_log;
+ (BOOL)shouldEnforceRxProtocols;

@end
