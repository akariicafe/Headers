@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (BOOL)hasArtworkData;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)type;
- (BOOL)isEqual:(id)a0;
- (id)copyImageData;
- (id)initWithImageData:(id)a0 mimeType:(id)a1;

@end
