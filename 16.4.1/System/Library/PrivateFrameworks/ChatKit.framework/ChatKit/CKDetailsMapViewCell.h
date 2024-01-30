@class NSString, CKDetailsLocationStringCell, UIView;

@interface CKDetailsMapViewCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) UIView *mapView;
@property (nonatomic) BOOL shouldShowLocationString;
@property (retain, nonatomic) CKDetailsLocationStringCell *locationStringView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
