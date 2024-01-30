@class NSUUID, NSDictionary, NSURL, NSData;

@interface ENCloudNetworkRequest : NSObject

@property (copy, nonatomic) NSUUID *requestID;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSData *body;
@property (nonatomic) unsigned long long httpMethod;

+ (id)requestWithURL:(id)a0 httpMethod:(unsigned long long)a1 headers:(id)a2 parameters:(id)a3 andBody:(id)a4;

- (void).cxx_destruct;
- (id)description;
- (id)httpMethodString;

@end
