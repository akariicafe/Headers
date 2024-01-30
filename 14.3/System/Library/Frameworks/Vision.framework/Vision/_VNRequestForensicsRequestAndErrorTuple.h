@class VNRequest, NSError;

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
