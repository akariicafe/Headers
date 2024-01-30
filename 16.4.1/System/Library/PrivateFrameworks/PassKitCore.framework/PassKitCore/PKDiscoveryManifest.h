@class NSArray, PKDiscoveryMessagesMetadata;

@interface PKDiscoveryManifest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic, getter=isMiniCardsAllowed) BOOL miniCardsAllowed;
@property (readonly, nonatomic) NSArray *rules;
@property (readonly, nonatomic) NSArray *discoveryItems;
@property (readonly, nonatomic) PKDiscoveryMessagesMetadata *messagesMetadata;

+ (id)manifestFromURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(long long)a0 rules:(id)a1 discoveryItems:(id)a2 engagementMessagesMetadata:(id)a3;

@end
