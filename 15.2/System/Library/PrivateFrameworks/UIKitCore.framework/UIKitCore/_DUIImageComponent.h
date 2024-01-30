@interface _DUIImageComponent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL ignoresAccessibilityFilters;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic) unsigned int contextID;
@property (readonly, nonatomic) BOOL representsPortal;
@property (nonatomic) BOOL hidesImage;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_configurePortalLayer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)portalView;

@end
