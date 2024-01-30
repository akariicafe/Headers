@class NSString, NSMutableArray, TRIClientSelectedNamespace;

@interface TRIClientFactorPack : TRIPBMessage

@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (readonly, nonatomic) unsigned long long factorLevelArray_Count;
@property (retain, nonatomic) TRIClientSelectedNamespace *selectedNamespace;
@property (nonatomic) BOOL hasSelectedNamespace;

+ (id)descriptor;

@end
