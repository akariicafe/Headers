@class NSString, NSMutableArray, GPBSourceContext;

@interface GPBEnum : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *enumvalueArray;
@property (readonly, nonatomic) unsigned long long enumvalueArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (retain, nonatomic) GPBSourceContext *sourceContext;
@property (nonatomic) BOOL hasSourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
