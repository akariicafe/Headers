@class NSString, NSData;

@interface AASecondaryAuthenticationResponse : AAResponse

@property (readonly, nonatomic) NSString *secondFactorToken;
@property (readonly, nonatomic) NSData *buddyML;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
