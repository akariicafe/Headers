@class TRIClient;

@interface PXStoryTrialSession : NSObject

@property (retain, nonatomic) TRIClient *trialClient;

- (void).cxx_destruct;
- (id)init;
- (id)_levelForFactorName:(id)a0;
- (id)fileURLForFactorName:(id)a0;

@end
