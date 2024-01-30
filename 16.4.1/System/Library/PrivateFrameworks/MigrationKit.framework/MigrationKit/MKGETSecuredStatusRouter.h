@class NSString, MKStorage, NSArray, NSDictionary;

@interface MKGETSecuredStatusRouter : NSObject <MKHTTPRouter>

@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) MKStorage *storage;
@property (retain, nonatomic) NSArray *supportedContentTypes;
@property (retain, nonatomic) NSArray *supportedTransferEncodings;
@property (retain, nonatomic) NSDictionary *signatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;

@end
