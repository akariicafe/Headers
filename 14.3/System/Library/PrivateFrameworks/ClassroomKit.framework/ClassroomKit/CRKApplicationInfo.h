@class NSString, NSDictionary;

@interface CRKApplicationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *shortVersionString;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)bundleIdentifiersFromDictionaryRepresentations:(id)a0;
+ (id)bundleIdentifierFromDictionaryRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 shortVersionString:(id)a1;

@end
