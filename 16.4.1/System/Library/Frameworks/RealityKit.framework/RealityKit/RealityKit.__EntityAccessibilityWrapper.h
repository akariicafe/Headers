@class NSString;

@interface RealityKit.__EntityAccessibilityWrapper : NSObject {
    void /* unknown type, empty encoding */ entity;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ rootEntityWrapper;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) BOOL isEntityRoot;
@property (nonatomic, readonly) BOOL isEntityAccessible;
@property (nonatomic, readonly) NSString *entityLabel;
@property (nonatomic, readonly) NSString *entityDescription;
@property (nonatomic, readonly) BOOL isEntityActive;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateScreenBoundingRectIn:(id)a0;

@end
