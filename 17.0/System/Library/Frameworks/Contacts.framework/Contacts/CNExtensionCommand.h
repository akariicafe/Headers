@class NSString, CNContactsProviderSession;

@interface CNExtensionCommand : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *commandType;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) CNContactsProviderSession *session;

+ (id)enable;
+ (id)disable;
+ (id)new;
+ (id)enableBundleIdentifier:(id)a0;
+ (id)disableBundleIdentifier:(id)a0;
+ (id)fetchContainerIdentifier;
+ (id)fetchEnabled;
+ (id)fetchExtensionItems;
+ (id)fetchExtensionItemsCount;
+ (id)synchronizeUsingSession:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCommandType:(id)a0;

@end
