@class NSString;

@interface SGQuickResponsesClassificationParameters : NSObject

@property (readonly, nonatomic) double positiveSamplingRate;
@property (readonly, nonatomic) double dynamicLabelSamplingRate;
@property (readonly, nonatomic) double negativeSamplingRate;
@property (readonly, nonatomic) unsigned long long maxReplyLength;
@property (readonly, nonatomic) unsigned long long maxPromptLength;
@property (readonly, nonatomic) double maxPromptWindowSeconds;
@property (readonly, nonatomic) NSString *promptJoiningString;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 language:(id)a1;

@end
