@class NSData;

@interface GPBBytesValue : GPBMessage

@property (copy, nonatomic) NSData *value;

+ (id)descriptor;

@end
