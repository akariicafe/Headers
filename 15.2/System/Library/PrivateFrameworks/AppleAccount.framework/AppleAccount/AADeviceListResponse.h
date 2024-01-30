@class NSArray;

@interface AADeviceListResponse : AAResponse

@property (readonly, nonatomic) NSArray *devices;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
