@class NSString;

@interface SUICVoiceSelectionViewModelLanguage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL isCurrentOutputLanguage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLanguageCode:(id)a0 localizedDisplayName:(id)a1 isCurrentOutputLanguage:(BOOL)a2;

@end
