@class ContentSearch, NSArray, Content, NSNumber;

@interface PlayVideoIntent : INIntent

@property (nonatomic, retain) Content *content;
@property (nonatomic, retain) ContentSearch *contentSearch;
@property (nonatomic, copy) NSArray *suggestedContent;
@property (nonatomic, retain) NSNumber *isRemoteExecution;
@property (nonatomic, copy) NSArray *allUmcIds;
@property (nonatomic, copy) NSArray *utsSearchParams;
@property (nonatomic, copy) NSArray *channelIds;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
