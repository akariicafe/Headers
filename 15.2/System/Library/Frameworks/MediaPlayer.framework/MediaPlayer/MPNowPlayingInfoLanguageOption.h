@class NSString, NSArray;

@interface MPNowPlayingInfoLanguageOption : NSObject

@property (readonly, nonatomic) void *mrLanguageOption;
@property (readonly, nonatomic) unsigned long long languageOptionType;
@property (readonly, nonatomic) NSString *languageTag;
@property (readonly, nonatomic) NSArray *languageOptionCharacteristics;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;

- (id)displayName;
- (id)identifier;
- (id)languageTag;
- (unsigned long long)languageOptionType;
- (id)languageOptionCharacteristics;
- (id)initWithType:(unsigned long long)a0 languageTag:(id)a1 characteristics:(id)a2 displayName:(id)a3 identifier:(id)a4;
- (id)initWithMRLanguageOption:(void *)a0;
- (BOOL)isAutomaticLegibleLanguageOption;
- (BOOL)isAutomaticAudibleLanguageOption;
- (id)copyExternalRepresentation;
- (BOOL)isEqualToLanguageOption:(id)a0;
- (void)dealloc;

@end
