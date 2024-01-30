@interface WFPhoneNumberFieldParameter : WFContactHandleFieldParameter

- (BOOL)allowsCustomHandles;
- (Class)multipleStateClass;
- (void)setAllowsCustomHandles:(BOOL)a0;
- (Class)singleStateClass;
- (id)supportedContactProperties;

@end
