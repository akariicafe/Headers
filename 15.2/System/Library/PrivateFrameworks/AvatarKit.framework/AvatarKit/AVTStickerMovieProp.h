@class NSURL, AVPlayerItem, NSMutableArray;

@interface AVTStickerMovieProp : AVTStickerProp

@property (retain, nonatomic) AVPlayerItem *moviePlayerItem;
@property (retain, nonatomic) NSMutableArray *loadingNodes;
@property (readonly, nonatomic) NSURL *movieURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)buildNodeForAvatar:(id)a0 withCamera:(id)a1 forExport:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)updateNode:(id)a0 withContentAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)stickerGenerationWillBegin;
- (void)stickerGenerationDidEnd;
- (id)initWithMovieURL:(id)a0 size:(SEL)a1 scale:(id)a2 position:(struct CGSize { double x0; double x1; })a3 renderLast:(BOOL)a4 orientToCamera:(BOOL)a5 rotation:(id)a6 palettesDescriptions:(id)a7 modifiers:(id)a8 adjustments:(void /* unknown type, empty encoding */)a9;
- (id)dictionaryWithTargetPath:(id)a0;

@end
