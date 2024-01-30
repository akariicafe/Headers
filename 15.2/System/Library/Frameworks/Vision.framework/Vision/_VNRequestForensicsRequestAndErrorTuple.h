@class VNRequest, NSError;

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRequest:(id)a0 error:(id)a1;

@end
