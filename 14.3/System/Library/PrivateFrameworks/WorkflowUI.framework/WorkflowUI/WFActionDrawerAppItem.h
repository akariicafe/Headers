@class NSString, UIImage;

@interface WFActionDrawerAppItem : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithName:(id)a0 icon:(id)a1 bundleIdentifier:(id)a2;

@end
