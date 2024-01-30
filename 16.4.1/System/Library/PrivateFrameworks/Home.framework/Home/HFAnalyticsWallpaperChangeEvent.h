@class NSDictionary;

@interface HFAnalyticsWallpaperChangeEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSDictionary *payloadDictionary;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
