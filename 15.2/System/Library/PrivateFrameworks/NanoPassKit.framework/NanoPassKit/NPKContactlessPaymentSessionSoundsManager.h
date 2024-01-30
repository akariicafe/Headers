@class NSString;

@interface NPKContactlessPaymentSessionSoundsManager : NSObject <NPKContactlessPaymentSessionManagerObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactlessPaymentSessionManager:(id)a0 didChangeSessionState:(id)a1;

@end
