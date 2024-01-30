@class NSString, CALayer, NSSet;

@interface HUCAPackageLayer : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) NSSet *tags;

+ (id)_allTags;
+ (id)_tagsForName:(id)a0;

- (void).cxx_destruct;
- (void)applyModifiers:(id)a0;
- (void)_applyPrimaryColorWithModifiers:(id)a0;
- (id)initWithName:(id)a0 layer:(id)a1;

@end
