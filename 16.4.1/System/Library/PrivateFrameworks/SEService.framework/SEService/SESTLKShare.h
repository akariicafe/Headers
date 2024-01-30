@class NSString, NSData;

@interface SESTLKShare : NSObject

@property (readonly) NSString *view;
@property (readonly) NSData *tlkUUID;
@property (readonly) NSData *sourcePeerIdentifier;
@property (readonly) NSData *targetPeerIdentifier;
@property (readonly) NSData *shareData;

+ (id)withCKKSExternalShare:(id)a0;
+ (id)withView:(id)a0 tlkUUID:(id)a1 sourcePeerIdentifier:(id)a2 targetPeerIdentifier:(id)a3 shareData:(id)a4;

- (void).cxx_destruct;
- (id)asCKKSExternalShare;

@end
