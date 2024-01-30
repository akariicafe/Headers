@class UIImage;

@interface SUScriptCanvasResult : NSObject

@property (readonly, nonatomic) UIImage *canvasImage;
@property (readonly, nonatomic) struct CGPath { } *canvasPath;

- (void)dealloc;
- (id)_initWithCanvas:(id)a0;

@end
