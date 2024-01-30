@class NSString, REContent, NSArray, REElementAction;

@interface REElement : NSObject <REAutomaticExportedInterface, NSCopying, NSCoding>

@property (retain) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long privacyBehavior;
@property (readonly, nonatomic) REContent *content;
@property (readonly, nonatomic) REContent *idealizedContent;
@property (readonly, nonatomic) NSArray *relevanceProviders;
@property (readonly, nonatomic) REElementAction *action;

+ (id)_supportedDictionaryEncodingKeys;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 content:(id)a1 action:(id)a2 relevanceProviders:(id)a3;
- (BOOL)isNoContentElement;
- (void)finalizeContent;
- (BOOL)_relevanceProvidersEqualToElement:(id)a0;
- (void)_updateIdentifier:(id)a0;
- (id)copyElementWithUpdatedRelevanceProviders:(id)a0;
- (id)dictionaryEncodingWithRelevanceProviderGenerator:(id)a0;
- (id)initWithDictionary:(id)a0 relevanceProviderGenerator:(id)a1;
- (id)initWithIdentifier:(id)a0 content:(id)a1 action:(id)a2 relevanceProviders:(id)a3 privacyBehavior:(unsigned long long)a4;
- (id)initWithIdentifier:(id)a0 content:(id)a1 idealizedContent:(id)a2 action:(id)a3 relevanceProviders:(id)a4;
- (id)initWithIdentifier:(id)a0 content:(id)a1 idealizedContent:(id)a2 action:(id)a3 relevanceProviders:(id)a4 privacyBehavior:(unsigned long long)a5;
- (id)shallowCopy;

@end
