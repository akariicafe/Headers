@class NSString, RMProtocolOrganizationDetails_Proof;

@interface RMProtocolOrganizationDetails : RMModelPayloadBase

@property (copy, nonatomic) NSString *detailsName;
@property (copy, nonatomic) NSString *detailsEmail;
@property (copy, nonatomic) NSString *detailsURL;
@property (copy, nonatomic) RMProtocolOrganizationDetails_Proof *detailsProof;

+ (id)requestWithName:(id)a0 email:(id)a1 URL:(id)a2 proof:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
