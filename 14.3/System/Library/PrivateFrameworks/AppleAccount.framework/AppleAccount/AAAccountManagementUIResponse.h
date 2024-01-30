@class NSData;

@interface AAAccountManagementUIResponse : AAResponse {
    NSData *_responseData;
}

@property (readonly, nonatomic) NSData *responseData;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
