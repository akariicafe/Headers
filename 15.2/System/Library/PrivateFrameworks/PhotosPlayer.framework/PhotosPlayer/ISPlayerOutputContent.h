@class ISWrappedAVPlayer;

@interface ISPlayerOutputContent : NSObject

@property (readonly, nonatomic) struct CGImage { } *photo;
@property (readonly, nonatomic) BOOL photoIsOriginal;
@property (readonly, nonatomic) int photoEXIFOrientation;
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (readonly, nonatomic) struct CGSize { double width; double height; } videoSize;

- (id)description;
- (id)initWithPhoto:(struct CGImage { } *)a0 photoIsOriginal:(BOOL)a1 photoEXIFOrientation:(int)a2 videoPlayer:(id)a3 videoSize:(struct CGSize { double x0; double x1; })a4;
- (void).cxx_destruct;
- (void)dealloc;

@end
