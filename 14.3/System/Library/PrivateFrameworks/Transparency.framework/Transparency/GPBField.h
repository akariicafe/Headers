@class NSString, NSMutableArray;

@interface GPBField : GPBMessage

@property (nonatomic) int kind;
@property (nonatomic) int cardinality;
@property (nonatomic) int number;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *typeURL;
@property (nonatomic) int oneofIndex;
@property (nonatomic) BOOL packed;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (copy, nonatomic) NSString *jsonName;
@property (copy, nonatomic) NSString *defaultValue;

+ (id)descriptor;

@end
