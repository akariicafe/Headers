@interface PCAdPolicyFormat : NSObject

- (void)policiesToEnforce:(id /* block */)a0;
- (void)policiesForContainerType:(id)a0 adType:(id)a1 adFormatType:(id)a2 completion:(id /* block */)a3;

@end
