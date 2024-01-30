@class BSBrand, NSString;

@interface IMBrand : NSObject

@property (readonly, retain, nonatomic) BSBrand *brand;
@property (readonly, nonatomic) NSString *brandURI;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *primaryPhoneNumber;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic) NSString *localizedResponseTime;

+ (id)placeholderName;
+ (id)brandWithBSBrand:(id)a0;

- (id)_init;
- (void)dealloc;
- (void)_setBrand:(id)a0;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
