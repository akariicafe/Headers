@class NSString;

@interface AAStorableLoginContext : NSObject

@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *rawPassword;
@property (copy, nonatomic) NSString *continuationKey;
@property (copy, nonatomic) NSString *passwordResetKey;
@property (copy, nonatomic) NSString *cloudKitToken;

- (id)initWithAppleID:(id)a0 altDSID:(id)a1;
- (void).cxx_destruct;

@end
