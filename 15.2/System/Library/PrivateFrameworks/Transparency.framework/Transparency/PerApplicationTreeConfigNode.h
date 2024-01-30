@class NSData, VRFPublicKey;

@interface PerApplicationTreeConfigNode : GPBMessage

@property (retain, nonatomic) VRFPublicKey *vrfPublicKey;
@property (nonatomic) BOOL hasVrfPublicKey;
@property (copy, nonatomic) NSData *publicKeyBytes;
@property (nonatomic) int earliestVersion;

+ (id)descriptor;

@end
