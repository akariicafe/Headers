@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *mimeType;

- (unsigned int)type;
- (BOOL)hasArtworkData;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyImageData;
- (id)initWithImageData:(id)a0 mimeType:(id)a1;

@end
