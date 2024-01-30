@class TRIClient;

@interface PXStoryTrialSession : NSObject

@property (retain, nonatomic) TRIClient *trialClient;

- (id)init;
- (void).cxx_destruct;
- (id)_levelForFactorName:(id)a0;
- (id)fileURLForFactorName:(id)a0;

@end
