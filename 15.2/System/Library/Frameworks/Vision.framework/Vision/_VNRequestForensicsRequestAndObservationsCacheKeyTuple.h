@class VNRequest;
@protocol NSObject, NSCopying;

@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) id<NSObject, NSCopying> observationsCacheKey;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRequest:(id)a0 observationsCacheKey:(id)a1;

@end
