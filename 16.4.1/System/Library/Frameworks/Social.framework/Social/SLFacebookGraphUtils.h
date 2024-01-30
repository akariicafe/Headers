@interface SLFacebookGraphUtils : NSObject

+ (id)_likeQueryStringForURL:(id)a0 flags:(unsigned long long)a1;
+ (void)_likeURL:(id)a0 requestMethod:(long long)a1 account:(id)a2 completion:(id /* block */)a3;
+ (id)_parseServerResponse:(id)a0 error:(id *)a1;
+ (void)fetchLikeStatusForURL:(id)a0 flags:(id)a1 account:(id)a2 completion:(id /* block */)a3;
+ (void)likeURL:(id)a0 account:(id)a1 completion:(id /* block */)a2;
+ (void)unlikeURL:(id)a0 account:(id)a1 completion:(id /* block */)a2;

@end
