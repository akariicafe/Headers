@class NSURL, NSString;

@interface QLThumbnailReply : NSObject {
    struct CGColorSpace { } *_colorSpace;
}

@property (copy, nonatomic) id /* block */ drawingBlock;
@property (copy, nonatomic) id /* block */ drawInContextBlock;
@property (copy, nonatomic) id /* block */ ioSurfaceBlock;
@property (copy, nonatomic) id /* block */ ioSurfaceAsyncBlock;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) int iconFlavor;
@property (nonatomic) struct CGSize { double width; double height; } contextSize;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (copy, nonatomic) NSString *extensionBadge;

+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })a0 currentContextDrawingBlock:(id /* block */)a1;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })a0 drawingBlock:(id /* block */)a1;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })a0 ioSurfaceAsyncBlock:(id /* block */)a1;
+ (id)replyWithContextSize:(struct CGSize { double x0; double x1; })a0 ioSurfaceBlock:(id /* block */)a1;
+ (id)replyWithImageFileURL:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
