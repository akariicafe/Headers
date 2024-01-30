@interface TSURLRequestFactory : NSObject

+ (id)_urlEncodedBodyWithPostdata:(id)a0;
+ (id)_jsonBodyWithPostdata:(id)a0;
+ (id)_urlEncodedBodyWithCarrierPostRawData:(id)a0;
+ (void)requestWithType:(unsigned long long)a0 URL:(id)a1 postdata:(id)a2 completionHandler:(id /* block */)a3;

@end
