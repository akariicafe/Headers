@class NSArray, ContentSearch;

@interface FindVideoIntent : INIntent

@property (nonatomic, copy) NSArray *content;
@property (nonatomic, retain) ContentSearch *contentSearch;
@property (nonatomic, copy) NSArray *suggestedContent;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
