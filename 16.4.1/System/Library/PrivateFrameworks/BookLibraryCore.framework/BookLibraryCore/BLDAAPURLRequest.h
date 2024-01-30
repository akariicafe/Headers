@class NSString, NSData, BUBag, NSNumber;

@interface BLDAAPURLRequest : NSObject {
    BUBag *_bag;
}

@property (retain, nonatomic) NSNumber *DSID;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSData *body;
@property (retain, nonatomic) NSString *daapURL;
@property (nonatomic) long long requestMethod;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) long long dataEncoding;

- (void)executeWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_valueForDAAPBagKey:(id)a0 completion:(id /* block */)a1;
- (void)_URLWithCompletionHandler:(id /* block */)a0;
- (void)_URLWithRetry:(BOOL)a0 completion:(id /* block */)a1;
- (void)_requestWithCompletionHandler:(id /* block */)a0;
- (void)_serverParametersWithCompletionHandler:(id /* block */)a0;
- (id)createDaapURL:(id)a0;
- (id)initWithDSID:(id)a0 reason:(long long)a1;

@end
