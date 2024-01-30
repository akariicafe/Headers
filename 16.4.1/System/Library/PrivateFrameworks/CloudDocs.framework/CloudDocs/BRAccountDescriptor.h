@class NSString;

@interface BRAccountDescriptor : NSObject <NSSecureCoding> {
    NSString *_personaIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL isLoggedInToCloudDocs;
@property (readonly, nonatomic) BOOL isDataSeparated;
@property (readonly, nonatomic) NSString *organizationName;

+ (BOOL)mightHaveDataSeparatedAccountDescriptor;
+ (id)accountDescriptorForPersonaID:(id)a0;
+ (id)accountDescriptorForPersonaID:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (id)allEligibleAccountDescriptors;
+ (id)allLoggedInAccountDescriptors;
+ (id)accountDescriptorForAccountID:(id)a0;
+ (id)accountDescriptorForURL:(id)a0;
+ (id)accountDescriptorForURL:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (id)accountDescriptorForAccountID:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (void)clearAccountDescriptorCache;

- (void)encodeWithCoder:(id)a0;
- (id)personaIdentifier;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPersonaIdentifier:(id)a0 accountIdentifier:(id)a1 organizationName:(id)a2 dataSeparated:(BOOL)a3 loggedInToCloudDocs:(BOOL)a4;

@end
