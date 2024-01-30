@class NSURL, SXJSONDictionary;

@interface SXLinkTapEvent : SXAnalyticsEvent

@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) SXJSONDictionary *analytics;

- (void).cxx_destruct;
- (id)initWithDestinationURL:(id)a0 analytics:(id)a1;

@end
