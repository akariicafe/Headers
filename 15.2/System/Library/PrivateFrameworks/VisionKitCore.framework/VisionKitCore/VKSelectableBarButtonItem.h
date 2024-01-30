@class VKSelectableBarButtonContainerView;

@interface VKSelectableBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) VKSelectableBarButtonContainerView *toggleView;
@property (nonatomic) BOOL showsMenuAsPrimaryAction;
@property (nonatomic) double padding;
@property (nonatomic) double compactPadding;
@property (nonatomic) double cornerRadiusRatio;
@property (nonatomic) double width;
@property (nonatomic) double alpha;

+ (id)keyPathsForValuesAffectingAlpha;

- (void)setMenu:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setAction:(SEL)a0;
- (void)setSelected:(BOOL)a0;
- (id)menu;
- (void).cxx_destruct;
- (id)init;
- (id)image;
- (void)setImage:(id)a0;
- (void)setTarget:(id)a0;

@end
