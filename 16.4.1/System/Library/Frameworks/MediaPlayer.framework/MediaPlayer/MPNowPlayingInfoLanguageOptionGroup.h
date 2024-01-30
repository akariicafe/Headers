@class NSArray, MPNowPlayingInfoLanguageOption;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject

@property (readonly, nonatomic) void *mrLanguageOptionGroup;
@property (readonly, nonatomic) NSArray *languageOptions;
@property (readonly, nonatomic) MPNowPlayingInfoLanguageOption *defaultLanguageOption;
@property (readonly, nonatomic) BOOL allowEmptySelection;

- (void)dealloc;
- (id)languageOptions;
- (BOOL)allowEmptySelection;
- (id)defaultLanguageOption;
- (id)initWithLanguageOptions:(id)a0 defaultLanguageOption:(id)a1 allowEmptySelection:(BOOL)a2;
- (id)initWithMRLanguageOptionGroup:(void *)a0;

@end
