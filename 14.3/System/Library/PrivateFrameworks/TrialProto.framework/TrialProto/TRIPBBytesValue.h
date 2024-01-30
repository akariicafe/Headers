@class NSData;

@interface TRIPBBytesValue : TRIPBMessage

@property (copy, nonatomic) NSData *value;

+ (id)descriptor;

@end
