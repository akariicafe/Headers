@class NSString, SBWindowScene;

@interface SBPresentationObservationToken : NSObject <BSInvalidatable>

@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ willPresentHandler;
@property (copy, nonatomic) id /* block */ didPresentHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (copy, nonatomic) id /* block */ didDismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void)didDismiss;
- (void)willPresent;
- (void)willDismiss;
- (void)invalidate;
- (void)didPresent;
- (void).cxx_destruct;

@end
