@class NSString, NSDictionary, FAFamilyMember, ACAccount, NSError;

@interface PASFlowResult : NSObject {
    void /* unknown type, empty encoding */ result;
}

@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) ACAccount *personalAccount;
@property (nonatomic, readonly) NSDictionary *authResults;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
