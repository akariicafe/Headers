@class NSString, NSArray, NSURL, UILabel;

@interface UIURLDragPreviewView : UIView {
    UILabel *_titleLabel;
    UILabel *_urlLabel;
    NSArray *_titleAndUrlConstraints;
    NSArray *_urlOnlyConstraints;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *urlText;

+ (void)initialize;
+ (id)_titleFont;
+ (id)_urlFont;
+ (id)viewWithTitle:(id)a0 URL:(id)a1;
+ (id)viewWithTitle:(id)a0 URLText:(id)a1;
+ (id)viewWithURL:(id)a0;
+ (id)viewWithURLText:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
