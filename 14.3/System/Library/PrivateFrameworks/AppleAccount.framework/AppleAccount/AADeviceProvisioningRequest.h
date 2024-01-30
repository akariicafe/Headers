@class NSString, NSData;

@interface AADeviceProvisioningRequest : AARequest {
    NSString *_dsid;
    NSString *_url;
    NSData *_data;
}

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 URLString:(id)a1 requestData:(id)a2;

@end
