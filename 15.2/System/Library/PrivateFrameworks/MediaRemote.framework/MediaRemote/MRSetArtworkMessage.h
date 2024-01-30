@class NSData;

@interface MRSetArtworkMessage : MRProtocolMessage

@property (readonly, nonatomic) NSData *artworkData;

- (id)initWithArtworkData:(id)a0;
- (unsigned long long)type;

@end
