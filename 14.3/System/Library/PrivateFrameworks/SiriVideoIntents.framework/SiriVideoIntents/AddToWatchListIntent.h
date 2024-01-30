@class Content, ContentSearch;

@interface AddToWatchListIntent : INIntent

@property (copy, nonatomic) Content *content;
@property (copy, nonatomic) ContentSearch *contentSearch;

@end
