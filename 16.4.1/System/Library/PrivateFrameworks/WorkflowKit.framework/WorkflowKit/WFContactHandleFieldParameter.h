@interface WFContactHandleFieldParameter : WFContactFieldParameter

@property (nonatomic) BOOL allowsCustomHandles;

- (BOOL)allowsCustomHandles;
- (Class)multipleStateClass;
- (void)setAllowsCustomHandles:(BOOL)a0;
- (Class)singleStateClass;
- (id)supportedContactProperties;

@end
