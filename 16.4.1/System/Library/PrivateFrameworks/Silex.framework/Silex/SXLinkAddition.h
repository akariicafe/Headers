@class NSURL, SXJSONDictionary;

@interface SXLinkAddition : SXAddition

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) SXJSONDictionary *analytics;

- (id)action;

@end
