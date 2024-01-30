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

- (void)setSelected:(BOOL)a0;
- (id)menu;
- (void)setMenu:(id)a0;
- (void)setImage:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)image;
- (id)init;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (void)setAction:(SEL)a0;

@end
