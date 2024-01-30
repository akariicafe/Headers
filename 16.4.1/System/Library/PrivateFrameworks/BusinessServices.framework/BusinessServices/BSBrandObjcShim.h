@class NSString;

@interface BSBrandObjcShim : NSObject {
    void /* unknown type, empty encoding */ brand;
}

@property (class, nonatomic, readonly) NSString *placeholderName;

@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) NSString *primaryBrandColorHexString;
@property (nonatomic, readonly) NSString *secondaryBrandColorHexString;
@property (nonatomic, readonly) BOOL isVerified;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ messagingDetails;

- (id)init;
- (void).cxx_destruct;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
