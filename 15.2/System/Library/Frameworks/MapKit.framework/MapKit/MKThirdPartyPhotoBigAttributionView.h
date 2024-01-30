@class NSString, _MKUILabel, UIView;

@interface MKThirdPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass> {
    _MKUILabel *_firstLineLabel;
    _MKUILabel *_secondLineLabel;
    UIView *_labelsView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(long long)a0;
- (void).cxx_destruct;
- (id)firstLineLabelFont;
- (id)secondLineLabelFont;
- (void)updateInfoAttributionString;
- (void)didUpdateMapItem;
- (void)didUpdateAttributionViewType;
- (void)willStartAnimatingActivityIndicatorView;
- (void)didEndAnimatingActivityIndicatorView;

@end
