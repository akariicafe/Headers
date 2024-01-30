@class NSString;

@interface GPBSourceContext : GPBMessage

@property (copy, nonatomic) NSString *fileName;

+ (id)descriptor;

@end
