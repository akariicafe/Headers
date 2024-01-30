@class NSString;

@interface FBSSceneOcclusion : NSObject <BSXPCCoding, BSDescriptionProviding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fullOcclusion;
+ (id)occlusionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CGRect;
- (id)succinctDescription;
- (id)_initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEqualToOcclusion:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;

@end
