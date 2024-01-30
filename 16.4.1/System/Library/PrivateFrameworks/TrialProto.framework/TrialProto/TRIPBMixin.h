@class NSString;

@interface TRIPBMixin : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *root;

+ (id)descriptor;

@end
