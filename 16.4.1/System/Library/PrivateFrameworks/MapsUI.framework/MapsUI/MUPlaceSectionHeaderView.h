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
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_setupHeader;

@end
