@class NSData;

@interface VRFPublicKey : GPBMessage

@property BOOL needsRefresh;
@property (copy, nonatomic) NSData *vrfKey;
@property (nonatomic) int type;

+ (id)descriptor;

@end
