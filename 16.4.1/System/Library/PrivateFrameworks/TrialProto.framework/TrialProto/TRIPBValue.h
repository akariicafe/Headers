@class NSString, TRIPBStruct, TRIPBListValue;

@interface TRIPBValue : TRIPBMessage

@property (readonly, nonatomic) int kindOneOfCase;
@property (nonatomic) int nullValue;
@property (nonatomic) double numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) TRIPBStruct *structValue;
@property (retain, nonatomic) TRIPBListValue *listValue;

+ (id)descriptor;

@end
