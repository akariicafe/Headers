@class NSString;

@interface SBFTraitsArbitrationInterfaceIdiomInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) BOOL isPad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithIsPad:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
