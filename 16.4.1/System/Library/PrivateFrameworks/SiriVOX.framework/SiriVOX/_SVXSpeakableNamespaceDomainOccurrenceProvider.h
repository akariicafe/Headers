@class NSString, NSSet;

@interface _SVXSpeakableNamespaceDomainOccurrenceProvider : NSObject <AFSpeakableNamespaceProvider>

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long count;
@property (copy, nonatomic) NSSet *deferredMessageKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerForDomain:(id)a0;

- (void).cxx_destruct;
- (id)stringForExpression:(id)a0;

@end
