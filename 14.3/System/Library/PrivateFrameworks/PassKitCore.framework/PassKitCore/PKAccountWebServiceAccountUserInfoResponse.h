@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) CNContact *userInfo;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)_stringValueFromDictionary:(id)a0 key:(id)a1 isOptional:(BOOL)a2;

@end
