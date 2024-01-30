@class NSString;

@interface _UIStatusBarRegionAxisAligningLayout : NSObject <_UIStatusBarRegionAxisLayout>

@property (nonatomic) long long alignment;
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aligningLayoutWithAlignment:(long long)a0;

- (id)constraintsForDisplayItems:(id)a0 layoutGuides:(id)a1 inContainerItem:(id)a2 axis:(long long)a3;

@end
