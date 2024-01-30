@class NSString;

@interface SBHCustomIconElement : NSObject <NSCopying, SBLeafIconDataSource>

@property (class, readonly, copy, nonatomic) NSString *elementIdentifier;

@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long suggestionSource;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)elementClassWithIdentifier:(id)a0;

- (unsigned long long)priorityForIcon:(id)a0;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (id)copyWithSuggestionSource:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUniqueIdentifier:(id)a0;
- (id)copyWithUniqueIdentifier;

@end
