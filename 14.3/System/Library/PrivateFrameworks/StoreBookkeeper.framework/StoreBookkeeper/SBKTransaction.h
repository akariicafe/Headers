@class NSString, NSMutableDictionary, NSURL, SBKRequest;

@interface SBKTransaction : NSObject

@property (retain) NSMutableDictionary *userInfo;
@property (readonly, copy) NSString *domain;
@property (retain) NSURL *requestURL;
@property (retain) SBKRequest *activeRequest;

- (id)init;
- (void).cxx_destruct;
- (id)newRequest;
- (id)clampsKey;
- (void)setTransactionContext:(id)a0 forKey:(id)a1;
- (void)processDataInResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)transactionContextForKey:(id)a0;
- (id)initWithDomain:(id)a0 requestURL:(id)a1;

@end
