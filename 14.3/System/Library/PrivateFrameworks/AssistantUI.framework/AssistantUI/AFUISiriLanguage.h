@class NSString;
@protocol AFUISiriLanguageDelegate;

@interface AFUISiriLanguage : NSObject

@property (readonly, weak, nonatomic, getter=_delegate) id<AFUISiriLanguageDelegate> delegate;
@property (copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode;
@property (nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked;
@property (nonatomic, getter=_setupAssistantHasCompletedInitialRunAvailable) BOOL setupAssistantHasCompletedInitialRunAvailable;

- (void)_spokenLanguageDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_currentLocaleDidChange:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)_computeSpokenLanguageCode;
- (void)_updateSpokenLanguageCode;

@end
