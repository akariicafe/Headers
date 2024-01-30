@class GPBUInt64Array;

@interface RevisionLogInclusionProofRequest : GPBMessage

@property (nonatomic) int version;
@property (nonatomic) int application;
@property (nonatomic) int logType;
@property (retain, nonatomic) GPBUInt64Array *revisionArray;
@property (readonly, nonatomic) unsigned long long revisionArray_Count;

+ (id)descriptor;

@end
