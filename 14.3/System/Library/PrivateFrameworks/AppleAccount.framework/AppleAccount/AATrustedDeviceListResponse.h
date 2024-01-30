@class NSArray, NSNumber;

@interface AATrustedDeviceListResponse : AAResponse

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSNumber *defaultNumberOfDevicesToShow;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
