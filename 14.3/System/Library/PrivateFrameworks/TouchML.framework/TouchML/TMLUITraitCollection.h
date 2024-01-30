@class NSArray, NSString, NSMutableDictionary, UIView, NSMutableOrderedSet, UITraitCollection;

@interface TMLUITraitCollection : NSObject {
    UITraitCollection *_traitCollection;
    NSMutableDictionary *_properties;
    NSMutableOrderedSet *_propertyKeys;
}

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) unsigned long long specificity;
@property (retain, nonatomic) NSArray *preferredContentSizeCategories;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) double displayScale;
@property (nonatomic) long long horizontalSizeClass;
@property (nonatomic) long long verticalSizeClass;
@property (nonatomic) long long forceTouchCapability;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) id subviews;
@property (copy, nonatomic) id constraints;
@property (readonly, nonatomic) UIView *view;

+ (id)traitEnvironment:(id)a0 willTransitionToTraitCollection:(id)a1 fromPreviousTraitCollection:(id)a2;
+ (id)defaultCollection;
+ (id)currentTraitCollection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)tmlDispose;
- (void)setTMLValue:(id)a0 forKeyPath:(id)a1;
- (void)applyToTraitEnvironment:(id)a0;

@end
