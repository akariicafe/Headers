@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken

@property (readonly, nonatomic) SBControlCenterController *controlCenterController;

- (long long)state;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithControlCenterController:(id)a0 scene:(id)a1;

@end
