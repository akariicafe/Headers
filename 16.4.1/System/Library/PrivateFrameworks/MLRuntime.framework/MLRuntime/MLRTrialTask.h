@class TRIClient;

@interface MLRTrialTask : NSObject

@property (readonly, nonatomic) TRIClient *triClient;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTriClient:(id)a0;
- (id)initWithTrialTask:(id)a0;

@end
