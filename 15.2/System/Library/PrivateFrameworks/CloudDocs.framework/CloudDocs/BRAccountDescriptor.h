@class NSString;

@interface BRAccountDescriptor : NSObject <NSSecureCoding> {
    NSString *_personaIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL isDataSeparated;
@property (readonly, nonatomic) NSString *organizationName;

+ (id)allLoggedInAccountDescriptors;
+ (void)clearAccountDescriptorCache;
+ (BOOL)mightHaveDataSeparatedAccountDescriptor;
+ (id)accountDescriptorForPersonaID:(id)a0;
+ (id)accountDescriptorForURL:(id)a0;

- (id)personaIdentifier;
- (id)initWithPersonaIdentifier:(id)a0 accountIdentifier:(id)a1 organizationName:(id)a2 dataSeparated:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
