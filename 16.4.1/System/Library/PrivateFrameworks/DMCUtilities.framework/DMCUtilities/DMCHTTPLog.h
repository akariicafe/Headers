@interface DMCHTTPLog : NSObject

+ (id)_logDirectoryForIdentifier:(id)a0;
+ (void)_writeRequestLogToURL:(id)a0 request:(id)a1 response:(id)a2 responseData:(id)a3 responseError:(id)a4;
+ (void)logHTTPDetailsForIdentifier:(id)a0 request:(id)a1 response:(id)a2 responseData:(id)a3 responseError:(id)a4;
+ (void)logHTTPDetailsForIdentifier:(id)a0 request:(id)a1 response:(id)a2 responseURL:(id)a3 responseError:(id)a4;

@end
