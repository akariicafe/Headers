@interface WFEmailAddressFieldParameter : WFContactHandleFieldParameter

- (Class)singleStateClass;
- (Class)multipleStateClass;
- (id)supportedContactProperties;
- (BOOL)allowsCustomHandles;
- (void)setAllowsCustomHandles:(BOOL)a0;

@end
