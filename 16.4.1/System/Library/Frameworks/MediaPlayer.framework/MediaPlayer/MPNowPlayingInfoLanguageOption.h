@class NSString, NSArray;

@interface MPNowPlayingInfoLanguageOption : NSObject

@property (readonly, nonatomic) void *mrLanguageOption;
@property (readonly, nonatomic) unsigned long long languageOptionType;
@property (readonly, nonatomic) NSString *languageTag;
@property (readonly, nonatomic) NSArray *languageOptionCharacteristics;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;

- (id)languageTag;
- (id)displayName;
- (id)identifier;
- (void)dealloc;
- (id)initWithType:(unsigned long long)a0 languageTag:(id)a1 characteristics:(id)a2 displayName:(id)a3 identifier:(id)a4;
- (id)copyExternalRepresentation;
- (id)initWithMRLanguageOption:(void *)a0;
- (BOOL)isAutomaticAudibleLanguageOption;
- (BOOL)isAutomaticLegibleLanguageOption;
- (BOOL)isEqualToLanguageOption:(id)a0;
- (id)languageOptionCharacteristics;
- (unsigned long long)languageOptionType;

@end
