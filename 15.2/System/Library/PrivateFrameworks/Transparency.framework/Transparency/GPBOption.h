@class NSString, GPBAny;

@interface GPBOption : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) GPBAny *value;
@property (nonatomic) BOOL hasValue;

+ (id)descriptor;

@end
