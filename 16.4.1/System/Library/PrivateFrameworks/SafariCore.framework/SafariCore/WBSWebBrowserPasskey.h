@class NSString, NSData;

@interface WBSWebBrowserPasskey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *relyingParty;
@property (readonly, nonatomic) NSData *credentialID;
@property (readonly, nonatomic) NSData *userHandle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 relyingParty:(id)a1 credentialID:(id)a2 userHandle:(id)a3;

@end
