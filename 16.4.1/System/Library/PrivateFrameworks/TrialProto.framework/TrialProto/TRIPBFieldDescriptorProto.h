@class NSString, TRIPBFieldOptions;

@interface TRIPBFieldDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int number;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) int label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *typeName;
@property (nonatomic) BOOL hasTypeName;
@property (copy, nonatomic) NSString *extendee;
@property (nonatomic) BOOL hasExtendee;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) BOOL hasDefaultValue;
@property (nonatomic) int oneofIndex;
@property (nonatomic) BOOL hasOneofIndex;
@property (copy, nonatomic) NSString *jsonName;
@property (nonatomic) BOOL hasJsonName;
@property (retain, nonatomic) TRIPBFieldOptions *options;
@property (nonatomic) BOOL hasOptions;

+ (id)descriptor;

@end
