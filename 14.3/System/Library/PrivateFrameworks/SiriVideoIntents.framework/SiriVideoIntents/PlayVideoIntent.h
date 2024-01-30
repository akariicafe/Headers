@class Content, ContentSearch;

@interface PlayVideoIntent : INIntent

@property (copy, nonatomic) Content *content;
@property (copy, nonatomic) ContentSearch *contentSearch;

@end
