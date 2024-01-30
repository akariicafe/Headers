@class UIColor;

@interface SXIssueCoverPresentationOptions : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL videoPlaybackEnabled;
@property (readonly, nonatomic) UIColor *parentBackgroundColor;

- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 videoPlaybackEnabled:(BOOL)a1 parentBackgroundColor:(id)a2;

@end
