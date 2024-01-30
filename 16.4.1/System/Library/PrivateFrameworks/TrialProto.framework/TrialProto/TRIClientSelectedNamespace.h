@class NSString, TRIPBUInt32Array;

@interface TRIClientSelectedNamespace : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (retain, nonatomic) TRIPBUInt32Array *compatibilityVersionArray;
@property (readonly, nonatomic) unsigned long long compatibilityVersionArray_Count;

+ (id)descriptor;

@end
