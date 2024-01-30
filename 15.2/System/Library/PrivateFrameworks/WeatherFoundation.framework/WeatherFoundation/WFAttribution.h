@class NSString, NSURL;

@interface WFAttribution : NSObject

@property (readonly) NSString *sourceName;
@property (readonly) NSString *localizedSourceAttribution;
@property (readonly) NSURL *sourceAttributionURL;

+ (id)sharedAttribution;
+ (id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)a0;
+ (id)weatherSourceAttributionURLForTrafficParameter:(id)a0;

- (id)sourceAttributionImageForStyle:(unsigned long long)a0;

@end
