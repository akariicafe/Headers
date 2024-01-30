@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (id)initWithImageData:(id)a0 mimeType:(id)a1;
- (id)description;
- (id)copyImageData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasArtworkData;
- (unsigned int)type;

@end
