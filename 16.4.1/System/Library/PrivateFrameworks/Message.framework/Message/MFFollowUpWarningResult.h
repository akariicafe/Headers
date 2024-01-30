@class NSError, SGMailIntelligenceFollowUpWarning;

@interface MFFollowUpWarningResult : NSObject

@property (readonly, nonatomic) SGMailIntelligenceFollowUpWarning *followUpWarning;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithFollowUpWarning:(id)a0 error:(id)a1;

@end
