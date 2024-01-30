@class NSString, AFUISiriLanguage, NSDate;

@interface SASGuideMonitor : NSObject <AFUISiriLanguageDelegate>

@property (readonly, nonatomic, getter=_language) AFUISiriLanguage *language;
@property (retain, nonatomic) NSDate *lastAppUpdateTimestamp;
@property (retain, nonatomic) NSDate *lastGuideCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitor;

- (void).cxx_destruct;
- (id)init;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)a0;
- (void)_applicationsDidChange;
- (void)checkForGuideUpdatesIfNecessary;

@end
