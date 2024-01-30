@class NSString, NSMutableArray;

@interface TRIRolloutAssignment : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) unsigned long long predicateArray_Count;
@property (retain, nonatomic) NSMutableArray *factorPackIdArray;
@property (readonly, nonatomic) unsigned long long factorPackIdArray_Count;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) BOOL hasFactorPackSetId;

+ (id)descriptor;

@end
