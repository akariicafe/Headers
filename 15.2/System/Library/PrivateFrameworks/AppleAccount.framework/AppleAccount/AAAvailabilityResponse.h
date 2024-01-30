@class NSString;

@interface AAAvailabilityResponse : AAResponse

@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *eta;
@property (readonly, nonatomic) NSString *feature;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
