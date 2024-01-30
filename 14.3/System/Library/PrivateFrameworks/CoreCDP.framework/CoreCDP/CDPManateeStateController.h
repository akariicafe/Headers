@class NSString;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener>

@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)securityLevelChanged:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isPrimaryAccountHSA2;
- (void)_didCreateCircleProxy;
- (BOOL)isManateeAvailable:(id *)a0;
- (void)_sendNotification:(const char *)a0 withValue:(unsigned long long)a1;
- (BOOL)_checkSecurityEligibility:(id *)a0;
- (void)reportManateeAvailable;
- (void)circleViewStatusChanged;
- (void)reportManateeUnavailable;
- (void)circleStatusChanged;

@end
