@class HUQuickControlContext, NSSet;

@interface HUQuickControlGroupContext : NSObject

@property (copy, nonatomic) HUQuickControlContext *primaryQuickControlContext;
@property (copy, nonatomic) NSSet *alternateQuickControlContexts;

- (void).cxx_destruct;
- (id)allControlItems;
- (id)initWithPrimaryQuickControlContext:(id)a0 alternateQuickControlContexts:(id)a1;

@end
