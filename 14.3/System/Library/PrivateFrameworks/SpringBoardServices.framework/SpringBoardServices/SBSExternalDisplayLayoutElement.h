@interface SBSExternalDisplayLayoutElement : FBSDisplayLayoutElement

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;

+ (id)elementWithIdentifier:(id)a0 presenting:(BOOL)a1;

- (id)succinctDescriptionBuilder;

@end
