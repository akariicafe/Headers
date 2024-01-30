@class NSData, NSValue, NSString;

@interface AAPhotoResponse : AAResponse

@property (readonly, nonatomic) NSData *photoData;
@property (readonly, nonatomic) NSValue *cropRect;
@property (readonly, nonatomic) NSString *serverCacheTag;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
