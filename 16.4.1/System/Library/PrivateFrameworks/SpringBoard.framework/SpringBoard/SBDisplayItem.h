@class NSString;

@interface SBDisplayItem : NSObject <NSCopying, BSDescriptionProviding> {
    NSString *_uniqueStringRepresentation;
    id /* block */ _sceneIdentifierFromBundleIdentifierGenerator;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *webClipIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicationDisplayItemWithBundleIdentifier:(id)a0 sceneIdentifier:(id)a1;
+ (id)displayItemForLayoutElement:(id)a0;
+ (id)displayItemWithProtobufRepresentation:(id)a0;
+ (id)displayItemWithType:(long long)a0 bundleIdentifier:(id)a1 uniqueIdentifier:(id)a2;
+ (id)homeScreenDisplayItem;
+ (id)remoteAlertDisplayItemWithServiceBundleIdentifier:(id)a0;
+ (id)switcherServiceDisplayItemWithServiceIdentifier:(id)a0;
+ (id)webAppDisplayItemWithWebAppIdentifier:(id)a0;

- (id)uniqueStringRepresentation;
- (id)_newSceneIdentifierForBundleIdentifier:(id)a0;
- (id)plistRepresentation;
- (id)_initWithLegacyPlistRepresentation:(id)a0 sceneIdentifierFromBundleIdentifierGenerator:(id /* block */)a1;
- (id)_calculateUniqueStringRepresentation;
- (id)initWithPlistRepresentation:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_initWithDictionaryPlistRepresentation:(id)a0;
- (id)protobufRepresentation;
- (id)initWithType:(long long)a0 bundleIdentifier:(id)a1 uniqueIdentifier:(id)a2;
- (id)displayItemForFloatingDockSuggestionsComparison;
- (BOOL)isEqualToDisplayItemForFloatingDockSuggestions:(id)a0;
- (id)initWithLegacyPlistRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithArrayPlistRepresentation:(id)a0;
- (BOOL)isHomeScreenDisplayItem;
- (id)_initWithPlistRepresentation:(id)a0 sceneIdentifierFromBundleIdentifierGenerator:(id /* block */)a1;
- (long long)compare:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
