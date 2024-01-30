@class NSString;

@interface SBFMagnifyMode : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) float zoomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentMagnifyMode;
+ (id)magnifyModeWithSize:(struct CGSize { double x0; double x1; })a0 name:(id)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
