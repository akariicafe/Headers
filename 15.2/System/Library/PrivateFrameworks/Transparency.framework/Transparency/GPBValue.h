@class NSString, GPBListValue, GPBStruct;

@interface GPBValue : GPBMessage

@property (readonly, nonatomic) int kindOneOfCase;
@property (nonatomic) int nullValue;
@property (nonatomic) double numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) GPBStruct *structValue;
@property (retain, nonatomic) GPBListValue *listValue;

+ (id)descriptor;

@end
