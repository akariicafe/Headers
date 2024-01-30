@interface _IMBSBrand : IMBrand

- (id)primaryPhoneNumber;
- (id)brandURI;
- (id)_initWithBSBrand:(id)a0;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)localizedResponseTime;
- (id)_init;
- (id)name;
- (BOOL)isVerified;

@end
