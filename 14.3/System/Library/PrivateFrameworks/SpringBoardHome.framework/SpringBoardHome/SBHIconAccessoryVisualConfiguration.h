@class NSString;

@interface SBHIconAccessoryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) double fontSize;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
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
