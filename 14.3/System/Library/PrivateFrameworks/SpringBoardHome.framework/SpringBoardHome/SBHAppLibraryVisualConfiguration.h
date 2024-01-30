@class NSString;

@interface SBHAppLibraryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) double searchContinuousCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } appSearchTextFieldLayoutInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
