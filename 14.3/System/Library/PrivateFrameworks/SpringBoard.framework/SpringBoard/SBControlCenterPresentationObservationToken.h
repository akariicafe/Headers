@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken

@property (readonly, nonatomic) SBControlCenterController *controlCenterController;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)state;
- (id)initWithControlCenterController:(id)a0;

@end
