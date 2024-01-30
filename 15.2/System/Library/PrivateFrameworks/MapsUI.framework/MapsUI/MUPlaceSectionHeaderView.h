@class NSString, UIFocusGuide, MUPlaceSectionHeaderViewModel, UILabel, UIButton;

@interface MUPlaceSectionHeaderView : UIView <MKActivityObserving> {
    UILabel *_titleLabel;
    UIButton *_seeAllButton;
    UIFocusGuide *_headerFocusGuide;
    MUPlaceSectionHeaderViewModel *_headerViewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)_contentSizeDidChange;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_setupHeader;

@end
