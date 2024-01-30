@class MPNowPlayingInfoLanguageOption;

@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) MPNowPlayingInfoLanguageOption *languageOption;
@property (readonly, nonatomic) long long setting;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;

@end
