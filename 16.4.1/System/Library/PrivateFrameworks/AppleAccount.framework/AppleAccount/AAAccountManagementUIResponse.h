@class NSData;

@interface AAAccountManagementUIResponse : AAResponse {
    NSData *_responseData;
}

@property (readonly, nonatomic) NSData *responseData;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
