@class NSMutableArray, UIFont;

@interface TLKIconsView : TLKStackView

@property (retain, nonatomic) NSMutableArray *imageViews;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) UIFont *symbolFont;

- (id)init;
- (void).cxx_destruct;
- (void)updateIcons:(id)a0;

@end
