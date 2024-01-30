@class NPKProtoRemotePassActionSelectItemRequest, NSString;
@protocol NPKCommutePlanField;

@interface NPKRemotePassActionSelectItemRequest : NPKRemotePassActionRequest {
    id<NPKCommutePlanField> _cachedCommutePlanField;
}

@property (retain, nonatomic) NPKProtoRemotePassActionSelectItemRequest *protoRequest;
@property (readonly, nonatomic) id<NPKCommutePlanField> commutePlanField;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;

- (id)identifier;
- (id)description;
- (void).cxx_destruct;
- (id)action;
- (id)actionText;
- (id)initWithIdentifier:(id)a0 deviceIdentifier:(id)a1 cardType:(unsigned long long)a2 passOrganizationName:(id)a3 passTypeIdentifier:(id)a4 passSerialNumber:(id)a5 commutePlanField:(id)a6 image:(id)a7 passLocalizedDesciption:(id)a8 caption:(id)a9 summaryText:(id)a10;
- (id)initWithPass:(id)a0 image:(id)a1 commutePlanField:(id)a2;

@end
