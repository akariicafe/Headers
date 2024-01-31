@class NSData, NSDictionary;

@interface CBSpatialInteractionPeerInfoClient : NSObject

@property (nonatomic) unsigned int peerID;
@property (copy, nonatomic) NSData *tokenData;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned int uwbTokenFlags;

- (void).cxx_destruct;

@end
