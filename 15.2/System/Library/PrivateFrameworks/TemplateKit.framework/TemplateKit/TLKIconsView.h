@class NSMutableArray, UIFont;

@interface TLKIconsView : TLKStackView

@property (retain, nonatomic) NSMutableArray *imageViews;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) UIFont *symbolFont;

- (void).cxx_destruct;
- (id)init;
- (void)updateIcons:(id)a0;

@end
