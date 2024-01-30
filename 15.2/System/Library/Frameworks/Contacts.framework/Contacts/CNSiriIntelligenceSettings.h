@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (void)setShouldShowSiriSuggestions:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (BOOL)shouldShowSiriSuggestions;

@end
