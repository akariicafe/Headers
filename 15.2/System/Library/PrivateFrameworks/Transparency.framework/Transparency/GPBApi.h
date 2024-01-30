@class NSString, NSMutableArray, GPBSourceContext;

@interface GPBApi : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *methodsArray;
@property (readonly, nonatomic) unsigned long long methodsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) GPBSourceContext *sourceContext;
@property (nonatomic) BOOL hasSourceContext;
@property (retain, nonatomic) NSMutableArray *mixinsArray;
@property (readonly, nonatomic) unsigned long long mixinsArray_Count;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
