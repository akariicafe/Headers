@class NSString, NSDate;
@protocol SFSafariPasswordCredential;

@interface SFSafariCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<SFSafariPasswordCredential> externalCredential;
@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *site;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isExternal) BOOL external;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExternalCredential:(id)a0;

@end
