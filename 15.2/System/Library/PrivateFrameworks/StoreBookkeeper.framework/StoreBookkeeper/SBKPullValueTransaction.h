@class NSString;
@protocol SBKKeyValuePayloadPair;

@interface SBKPullValueTransaction : SBKTransaction

@property (readonly, copy, nonatomic) NSString *requestedKey;
@property (readonly, nonatomic) id<SBKKeyValuePayloadPair> clientItemPayloadPair;
@property (readonly, nonatomic) NSString *clientItemVersionAnchor;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) id<SBKKeyValuePayloadPair> resultItemPayloadPair;
@property (readonly, nonatomic) NSString *resultItemVersionAnchor;
@property (readonly, nonatomic) NSString *resultDomainVersion;

- (id)newRequest;
- (id)description;
- (void).cxx_destruct;
- (id)clampsKey;
- (void)processDataInResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithStoreBagContext:(id)a0 requestedKey:(id)a1 clientItemPayloadPair:(id)a2 clientItemVersionAnchor:(id)a3;

@end
