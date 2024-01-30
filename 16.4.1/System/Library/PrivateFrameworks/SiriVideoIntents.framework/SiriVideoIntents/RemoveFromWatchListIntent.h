@class Content, ContentSearch;

@interface RemoveFromWatchListIntent : INIntent

@property (nonatomic, retain) Content *content;
@property (nonatomic, retain) ContentSearch *contentSearch;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
