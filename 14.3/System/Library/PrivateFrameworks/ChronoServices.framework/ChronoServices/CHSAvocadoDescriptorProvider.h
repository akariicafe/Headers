@class NSSet, NSDictionary, NSMutableSet, NSString;
@protocol CHSChronoWidgetServiceServer;

@interface CHSAvocadoDescriptorProvider : NSObject <CHSChronoWidgetServiceClient, BSDescriptionProviding>

@property (copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;
@property (readonly, copy, nonatomic) NSMutableSet *observers;
@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;
@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addObserver:(id)a0;
- (id)succinctDescription;
- (void)_mainQueue_handleNewDescriptors:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptorForPersonality:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)avocadoDescriptorsDidChange:(id)a0;
- (id)_descriptionForArray:(id)a0 name:(id)a1;
- (void)_sendApplicationWithBundleIdentifierEnteredForeground:(id)a0;

@end
