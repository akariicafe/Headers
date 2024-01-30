@class NSString;
@protocol SBKKeyValuePayloadPair;

@interface SBKPullValueTransaction : SBKTransaction

@property (readonly, copy) NSString *requestedKey;
@property (readonly) id<SBKKeyValuePayloadPair> clientItemPayloadPair;
@property (readonly) NSString *clientItemVersionAnchor;
@property (readonly) BOOL success;
@property (readonly) id<SBKKeyValuePayloadPair> resultItemPayloadPair;
@property (readonly) NSString *resultItemVersionAnchor;
@property (readonly) NSString *resultDomainVersion;

- (void).cxx_destruct;
- (id)description;
- (id)newRequest;
- (id)clampsKey;
- (void)processDataInResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithStoreBagContext:(id)a0 requestedKey:(id)a1 clientItemPayloadPair:(id)a2 clientItemVersionAnchor:(id)a3;

@end
