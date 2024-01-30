@class NSString;

@interface CFAppVocabularySearchRequestHandler : SAIntentGroupAppVocabularySearchRequest <AFServiceCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)stringType;
- (void)performWithCompletion:(id /* block */)a0 serviceHelper:(id)a1;

@end
