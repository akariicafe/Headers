@class Content, ContentSearch;

@interface RemoveFromWatchListIntent : INIntent

@property (copy, nonatomic) Content *content;
@property (copy, nonatomic) ContentSearch *contentSearch;

@end
