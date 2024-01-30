@class NSString;

@interface TRIUIAssignment : TRIPBMessage

@property (nonatomic) unsigned int numBuckets;
@property (nonatomic) BOOL hasNumBuckets;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;

+ (id)descriptor;

@end
