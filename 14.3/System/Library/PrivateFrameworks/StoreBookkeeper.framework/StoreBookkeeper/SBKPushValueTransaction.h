@class NSString;
@protocol SBKKeyValuePayloadPair;

@interface SBKPushValueTransaction : SBKTransaction {
    BOOL _isRechedulable;
}

@property (readonly) id<SBKKeyValuePayloadPair> clientItemPayloadPair;
@property (readonly) NSString *clientItemVersionAnchor;
@property (readonly) id<SBKKeyValuePayloadPair> requestItemPayloadPair;
@property (readonly) NSString *requestItemVersionAnchor;
@property (readonly) BOOL success;
@property (readonly) id<SBKKeyValuePayloadPair> resultItemPayloadPair;
@property (readonly) NSString *resultItemVersionAnchor;
@property (readonly) NSString *resultDomainVersion;

- (void).cxx_destruct;
- (id)description;
- (id)newRequest;
- (id)clampsKey;
- (void)processDataInResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_resolveConflictBetweenClientPayloadPair:(id)a0 andServerPayloadPair:(id)a1;
- (id)initWithStoreBagContext:(id)a0 clientItemPayloadPair:(id)a1 clientItemVersionAnchor:(id)a2;

@end
