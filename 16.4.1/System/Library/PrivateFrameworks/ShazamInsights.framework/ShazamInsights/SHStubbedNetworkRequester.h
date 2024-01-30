@class NSHTTPURLResponse, NSString, NSData, NSURL;

@interface SHStubbedNetworkRequester : NSObject <SHNetworkRequester>

@property (readonly, nonatomic) NSData *requestData;
@property (readonly, nonatomic) NSURL *downloadFileURL;
@property (readonly, nonatomic) NSHTTPURLResponse *httpResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
