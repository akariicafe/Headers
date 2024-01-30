@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (id)init;
- (void)dealloc;
- (BOOL)shouldShowSiriSuggestions;
- (void)setShouldShowSiriSuggestions:(BOOL)a0;

@end
