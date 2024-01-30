@class NSData;

@interface Signature : GPBMessage

@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSData *signingKeySpkihash;
@property (nonatomic) int algorithm;

+ (id)descriptor;

@end
