@class PKValueAddedServiceTransaction, NSString, NSDictionary, NSURLSession, PKPass;

@interface PKValueAddedServiceWebService : NSObject <NSURLConnectionDataDelegate> {
    PKValueAddedServiceTransaction *_valueAddedTransaction;
    NSURLSession *_urlSession;
}

@property (readonly, nonatomic) NSDictionary *merchantPayload;
@property (readonly, nonatomic) PKPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
