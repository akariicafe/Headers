@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (void)setShouldShowSiriSuggestions:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldShowSiriSuggestions;
- (id)init;

@end
