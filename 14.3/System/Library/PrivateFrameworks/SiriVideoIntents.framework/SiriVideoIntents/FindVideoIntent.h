@class NSArray, ContentSearch;

@interface FindVideoIntent : INIntent

@property (copy, nonatomic) NSArray *content;
@property (copy, nonatomic) ContentSearch *contentSearch;

@end
