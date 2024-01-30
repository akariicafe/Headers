@class NSString;

@interface SBPresentationObservationToken : NSObject <BSInvalidatable>

@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ willPresentHandler;
@property (copy, nonatomic) id /* block */ didPresentHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (copy, nonatomic) id /* block */ didDismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didPresent;
- (void).cxx_destruct;
- (void)willDismiss;
- (void)didDismiss;
- (void)invalidate;
- (void)willPresent;

@end
