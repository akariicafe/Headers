@class NSURL, NSString;

@interface OKAudioItem : NSObject <OKSettingsSupport>

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

@end
