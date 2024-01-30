@class NSString;

@interface GPBStringValue : GPBMessage

@property (copy, nonatomic) NSString *value;

+ (id)descriptor;

@end
