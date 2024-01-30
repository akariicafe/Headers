@class NSLocale;

@interface AXLTLanguageAssetManager : NSObject

@property (readonly, nonatomic) BOOL languageAssetAvaliable;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)sharedInstance;

- (void)deleteSpeechAsset;
- (void)downloadSpeechAsset:(id /* block */)a0;

@end
