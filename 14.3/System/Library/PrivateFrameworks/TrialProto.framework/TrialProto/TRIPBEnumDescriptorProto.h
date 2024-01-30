@class NSString, NSMutableArray, TRIPBEnumOptions;

@interface TRIPBEnumDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (retain, nonatomic) NSMutableArray *valueArray;
@property (readonly, nonatomic) unsigned long long valueArray_Count;
@property (retain, nonatomic) TRIPBEnumOptions *options;
@property (nonatomic) BOOL hasOptions;
@property (retain, nonatomic) NSMutableArray *reservedRangeArray;
@property (readonly, nonatomic) unsigned long long reservedRangeArray_Count;
@property (retain, nonatomic) NSMutableArray *reservedNameArray;
@property (readonly, nonatomic) unsigned long long reservedNameArray_Count;

+ (id)descriptor;

@end
