@class NSString;

@interface SNVoiceTriggerCommand : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long minDurationBlocks;
@property (readonly, nonatomic) double confidenceThreshold;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
