@class NPKProtoRemotePassActionEnterValueRequest;
@protocol NPKBalanceField;

@interface NPKRemotePassActionEnterValueRequest : NPKRemotePassActionRequest {
    id<NPKBalanceField> _cachedBalanceField;
}

@property (retain, nonatomic) NPKProtoRemotePassActionEnterValueRequest *protoRequest;
@property (readonly, nonatomic) id<NPKBalanceField> balanceField;

- (id)identifier;
- (id)description;
- (void).cxx_destruct;
- (id)action;
- (id)initWithIdentifier:(id)a0 cardType:(unsigned long long)a1 passOrganizationName:(id)a2 balanceField:(id)a3 image:(id)a4 passLocalizedDesciption:(id)a5 caption:(id)a6 summaryText:(id)a7;
- (id)initWithPass:(id)a0 image:(id)a1 balanceField:(id)a2;

@end
