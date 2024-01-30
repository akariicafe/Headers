@class NSString, NSArray, NSUUID;

@interface SBPressSequenceMetricData : SBAWDMetricData

@property (copy, nonatomic) NSString *pressName;
@property (copy, nonatomic) NSArray *pressSequence;
@property (nonatomic) BOOL didTriggerSOS;
@property (nonatomic) unsigned long long clickMax;
@property (copy, nonatomic) NSUUID *sosTriggerUUID;

- (void).cxx_destruct;

@end
