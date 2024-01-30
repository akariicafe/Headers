@interface _DUIImageComponent : NSObject <NSSecureCoding> {
    struct CGPoint { double x; double y; } _origin;
    struct CGSize { double width; double height; } _size;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL ignoresAccessibilityFilters;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic) unsigned int contextID;
@property (readonly, nonatomic) BOOL representsPortal;
@property (nonatomic) BOOL hidesImage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)_configurePortalLayer:(id)a0;
- (id)portalView;

@end
