@interface HMBLocalZoneLocalInput : HMBLocalZoneInput

@property long long additionConstraint;

- (id)commitWithOptions:(id)a0 error:(id *)a1;
- (BOOL)stageAdditionForModel:(id)a0 error:(id *)a1;

@end
