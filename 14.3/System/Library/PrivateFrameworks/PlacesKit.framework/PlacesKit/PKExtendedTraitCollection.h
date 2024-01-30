@class UITraitCollection;

@interface PKExtendedTraitCollection : NSObject

@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) long long layoutSizeSubclass;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) double displayScale;
@property (retain, nonatomic) UITraitCollection *traitCollectionForMapKit;

- (void).cxx_destruct;
- (id)description;

@end
