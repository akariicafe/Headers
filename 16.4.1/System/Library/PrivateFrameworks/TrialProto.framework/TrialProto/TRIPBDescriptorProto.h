@class NSString, NSMutableArray, TRIPBMessageOptions;

@interface TRIPBDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (retain, nonatomic) NSMutableArray *fieldArray;
@property (readonly, nonatomic) unsigned long long fieldArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionArray;
@property (readonly, nonatomic) unsigned long long extensionArray_Count;
@property (retain, nonatomic) NSMutableArray *nestedTypeArray;
@property (readonly, nonatomic) unsigned long long nestedTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *enumTypeArray;
@property (readonly, nonatomic) unsigned long long enumTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionRangeArray;
@property (readonly, nonatomic) unsigned long long extensionRangeArray_Count;
@property (retain, nonatomic) NSMutableArray *oneofDeclArray;
@property (readonly, nonatomic) unsigned long long oneofDeclArray_Count;
@property (retain, nonatomic) TRIPBMessageOptions *options;
@property (nonatomic) BOOL hasOptions;
@property (retain, nonatomic) NSMutableArray *reservedRangeArray;
@property (readonly, nonatomic) unsigned long long reservedRangeArray_Count;
@property (retain, nonatomic) NSMutableArray *reservedNameArray;
@property (readonly, nonatomic) unsigned long long reservedNameArray_Count;

+ (id)descriptor;

@end
