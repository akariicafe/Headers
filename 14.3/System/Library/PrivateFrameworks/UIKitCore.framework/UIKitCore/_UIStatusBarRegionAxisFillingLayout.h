@class NSString;

@interface _UIStatusBarRegionAxisFillingLayout : NSObject <_UIStatusBarRegionAxisLayout>

@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fillingLayout;

- (id)constraintsForDisplayItems:(id)a0 layoutGuides:(id)a1 inContainerItem:(id)a2 axis:(long long)a3;

@end
