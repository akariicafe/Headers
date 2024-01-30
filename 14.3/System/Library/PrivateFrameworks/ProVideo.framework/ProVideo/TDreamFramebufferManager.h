@class NSString, NSMutableArray, TDreamFramebuffer;

@interface TDreamFramebufferManager : NSObject {
    id memoryWarningObserver;
    NSMutableArray *framebufferArrayLarge;
    NSMutableArray *framebufferArraySmall;
    NSString *actualLookUp;
    NSString *actualPalette;
    struct CGSize { double width; double height; } smallUseSize;
    struct CGSize { double width; double height; } largeUseSize;
}

@property (retain, nonatomic) TDreamFramebuffer *outputBufferAndTexture;
@property (retain, nonatomic) TDreamFramebuffer *lookUpBuffer;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)lookupFailedToLoad;
- (void)deleteLargeFramebuffers;
- (void)deleteSmallFramebuffers;
- (void)deleteAllFramebuffers;
- (void)newLookUp:(id)a0;
- (unsigned int)getOutputBufferNameWithIPImage:(struct IPImage { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; })a0;
- (void)addImageBufferToArray:(int)a0 ipImage:(struct IPImage { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; })a1;
- (unsigned int)getTextureNameFromArray:(int)a0;
- (unsigned int)getBufferFromArray:(int)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)clearFrameBuffers;
- (unsigned int)getOutputBufferNamer;

@end
