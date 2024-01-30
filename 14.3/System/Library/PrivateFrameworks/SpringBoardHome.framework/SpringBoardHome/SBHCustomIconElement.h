@class NSString;

@interface SBHCustomIconElement : NSObject <SBLeafIconDataSource>

@property (class, readonly, copy, nonatomic) NSString *elementIdentifier;

@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isSuggestion) BOOL suggestion;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)priorityForIcon:(id)a0;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithUniqueIdentifier;
- (id)initWithUniqueIdentifier:(id)a0;

@end
