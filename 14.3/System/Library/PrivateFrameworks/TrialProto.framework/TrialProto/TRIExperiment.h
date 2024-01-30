@class NSString, TRIPBTimestamp, TRIPBUInt32Array, TRIProjectOwner, NSMutableArray, TRIApproval;

@interface TRIExperiment : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (copy, nonatomic) NSString *experimentName;
@property (nonatomic) BOOL hasExperimentName;
@property (copy, nonatomic) NSString *experimentDescription;
@property (nonatomic) BOOL hasExperimentDescription;
@property (copy, nonatomic) NSString *namespaceId;
@property (nonatomic) BOOL hasNamespaceId;
@property (retain, nonatomic) TRIProjectOwner *owner;
@property (nonatomic) BOOL hasOwner;
@property (retain, nonatomic) TRIPBTimestamp *createDate;
@property (nonatomic) BOOL hasCreateDate;
@property (retain, nonatomic) TRIPBTimestamp *lastModified;
@property (nonatomic) BOOL hasLastModified;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) TRIPBUInt32Array *compatibilityVersionArray;
@property (readonly, nonatomic) unsigned long long compatibilityVersionArray_Count;
@property (nonatomic) unsigned int seed;
@property (nonatomic) BOOL hasSeed;
@property (retain, nonatomic) NSMutableArray *deploymentArray;
@property (readonly, nonatomic) unsigned long long deploymentArray_Count;
@property (retain, nonatomic) NSMutableArray *treatmentArray;
@property (readonly, nonatomic) unsigned long long treatmentArray_Count;
@property (nonatomic) BOOL isClientExclusive;
@property (nonatomic) BOOL hasIsClientExclusive;
@property (retain, nonatomic) TRIApproval *qaApproval;
@property (nonatomic) BOOL hasQaApproval;

+ (id)descriptor;

@end
