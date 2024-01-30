@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken

@property (readonly, nonatomic) SBControlCenterController *controlCenterController;

- (long long)state;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithControlCenterController:(id)a0;

@end
