@class NSString;

@interface GPBMixin : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *root;

+ (id)descriptor;

@end
