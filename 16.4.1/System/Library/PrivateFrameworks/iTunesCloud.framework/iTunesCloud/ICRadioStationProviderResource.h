@class NSURL, NSString;

@interface ICRadioStationProviderResource : NSObject

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)initWithRadioStationProviderResourceDictionary:(id)a0;

@end
