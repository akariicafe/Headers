@class NSString, UIActivityIndicatorView, UIImageView, UIView, MKMapItem;

@interface MKPhotoBigAttributionView : UIView <MKPhotoBigAttributionViewSubclass, MKActivityObserving> {
    UIImageView *_imageView;
    UIView *_backgroundView;
    BOOL _needsImageLoad;
}

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIActivityIndicatorView *spinner;
@property (readonly, nonatomic) long long context;
@property (nonatomic) long long type;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bigAttributionViewForMapItem:(id)a0 attributionType:(long long)a1 isFirstParty:(BOOL)a2 context:(long long)a3;

- (void)layoutSubviews;
- (void)updateBackgroundIfNeeded;
- (id)initWithContext:(long long)a0;
- (void).cxx_destruct;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)didUpdateMapItem;
- (void)didUpdateAttributionViewType;
- (void)willStartAnimatingActivityIndicatorView;
- (void)didEndAnimatingActivityIndicatorView;

@end
