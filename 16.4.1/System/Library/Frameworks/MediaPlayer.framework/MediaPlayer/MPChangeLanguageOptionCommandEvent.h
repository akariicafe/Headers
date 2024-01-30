@class MPNowPlayingInfoLanguageOption;

@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) MPNowPlayingInfoLanguageOption *languageOption;
@property (readonly, nonatomic) long long setting;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
