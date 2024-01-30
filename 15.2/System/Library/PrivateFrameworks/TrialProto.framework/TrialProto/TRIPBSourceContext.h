@class NSString;

@interface TRIPBSourceContext : TRIPBMessage

@property (copy, nonatomic) NSString *fileName;

+ (id)descriptor;

@end
