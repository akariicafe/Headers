@class NSMutableArray;

@interface TLKIconsView : TLKStackView

@property (retain, nonatomic) NSMutableArray *imageViews;
@property (nonatomic) unsigned long long prominence;

- (void)updateIcons:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
