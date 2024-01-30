@class NSArray, NSString, HKDisplayTypeContextView;
@protocol HKDisplayTypeContextTableViewCellDelegate;

@interface HKDisplayTypeContextTableViewCell : UITableViewCell <HKDisplayTypeContextViewDelegate> {
    HKDisplayTypeContextView *_contextView;
}

@property (copy, nonatomic) NSArray *displayTypeContextItems;
@property (weak, nonatomic) id<HKDisplayTypeContextTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setupView;
- (void)contextView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)contextView:(id)a0 didDeselectItemAtIndex:(long long)a1;
- (void)contextView:(id)a0 didTapOnInfoButtonAtIndex:(long long)a1;
- (void)selectItemAtIndex:(long long)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;

@end
