@class NSString;
@protocol REDonatedActionIdentifierProviding;

@interface _REPerformedActionKey : NSObject

@property (readonly, nonatomic) id<REDonatedActionIdentifierProviding> identifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)keyForBundleIdentifier:(id)a0 identifier:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
