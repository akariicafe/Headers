@interface ODNServices : NSObject

- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (void)fetchGeoCodingsForAddresses:(id)a0 completion:(id /* block */)a1;
- (void)updateGeoCodingsForAddresses:(id)a0 locations:(id)a1 completion:(id /* block */)a2;

@end
