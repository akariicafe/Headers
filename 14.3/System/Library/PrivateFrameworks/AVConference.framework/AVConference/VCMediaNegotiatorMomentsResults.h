@interface VCMediaNegotiatorMomentsResults : NSObject

@property (nonatomic) int capabilities;
@property (nonatomic) int mulitwayCapabilities;
@property (readonly, nonatomic) unsigned int avcMomentsCapabilities;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;

@end
