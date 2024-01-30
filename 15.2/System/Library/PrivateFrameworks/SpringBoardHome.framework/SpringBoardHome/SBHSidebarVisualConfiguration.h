@class NSString;

@interface SBHSidebarVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) double contentWidth;
@property (nonatomic) double searchBarTopOffset;
@property (nonatomic) double firstWidgetTopOffset;
@property (nonatomic, getter=isContentFullscreen) BOOL contentFullscreen;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } insets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (double)effectiveContentWidthWithContainerWidth:(double)a0;

@end
