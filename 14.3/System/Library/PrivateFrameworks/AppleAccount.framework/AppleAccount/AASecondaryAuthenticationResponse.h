@class NSString, NSData;

@interface AASecondaryAuthenticationResponse : AAResponse

@property (readonly, nonatomic) NSString *secondFactorToken;
@property (readonly, nonatomic) NSData *buddyML;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
