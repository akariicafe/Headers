@class NSSet, NSDictionary, NSString, NSMutableSet, CHSChronoServicesConnection, NSMutableArray;

@interface CHSWidgetDescriptorProvider : NSObject <BSDescriptionProviding, CHSChronoServiceClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_descriptorsByExtensionIdentifier;
    NSMutableSet *_lock_observers;
    CHSChronoServicesConnection *_lock_connection;
    BOOL _lock_hasLoadedContentOnce;
    NSMutableArray *_lock_loadedDescriptorsCompletions;
    NSMutableArray *_lock_loadedDescriptorsContainerIdentifiers;
}

@property (copy, nonatomic) id /* block */ eduModeProvider;
@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)widgetDescriptorsDidChange:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)addObserver:(id)a0;
- (void)reloadDescriptorsForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_lock_postDEPRECATEDDescriptorsDidChangeIfNecessary;
- (void)_lock_loadContentInitiallySynchronouslyIfNecessary;
- (void)removeObserver:(id)a0;
- (void)_lock_notifyDescriptorsDidLoad;
- (id)initWithConnection:(id)a0;
- (void)_lock_reloadContentAsynchronouslyForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_lock_addNewDescriptorsFromDescriptors:(id)a0;
- (BOOL)_isEDUMode;
- (void).cxx_destruct;
- (void)_lock_notifyObserversDescriptorsDidChange;
- (id)descriptorForPersonality:(id)a0;

@end
