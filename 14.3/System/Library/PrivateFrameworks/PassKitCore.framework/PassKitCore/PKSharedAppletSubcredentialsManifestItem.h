@class NSString;

@interface PKSharedAppletSubcredentialsManifestItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) long long entitlement;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long rawState;
@property (readonly, nonatomic, getter=isForWatch) BOOL forWatch;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
