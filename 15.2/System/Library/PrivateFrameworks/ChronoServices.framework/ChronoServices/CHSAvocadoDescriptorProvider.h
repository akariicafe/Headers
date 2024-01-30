@class NSSet, NSDictionary, NSString, NSMutableSet, CHSChronoServicesConnection;

@interface CHSAvocadoDescriptorProvider : NSObject <BSDescriptionProviding, CHSChronoWidgetServiceClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_descriptorsByExtensionIdentifier;
    NSMutableSet *_lock_observers;
    CHSChronoServicesConnection *_lock_server;
    BOOL _lock_hasLoadedContentOnce;
}

@property (copy, nonatomic) id /* block */ eduModeProvider;
@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)avocadoDescriptorsDidChange:(id)a0;
- (id)descriptorForPersonality:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_lock_loadContentInitiallySynchronouslyIfNecessary;
- (id)succinctDescription;
- (BOOL)_isEDUMode;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_lock_postDEPRECATEDDescriptorsDidChangeIfNecessary;
- (id)initWithServer:(id)a0;

@end
