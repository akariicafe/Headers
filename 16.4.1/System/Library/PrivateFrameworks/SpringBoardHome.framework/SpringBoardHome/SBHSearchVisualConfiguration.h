@class NSString;

@interface SBHSearchVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) double textFieldWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textFieldPortraitLayoutInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textFieldLandscapeLayoutInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
