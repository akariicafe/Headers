@class NSData;

@interface TopLevelTreeConfigNode : GPBMessage

@property (copy, nonatomic) NSData *publicKeyBytes;
@property (nonatomic) int earliestVersion;

+ (id)descriptor;

@end
