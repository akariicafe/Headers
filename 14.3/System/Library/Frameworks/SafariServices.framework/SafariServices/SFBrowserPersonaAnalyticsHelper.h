@interface SFBrowserPersonaAnalyticsHelper : NSObject {
    unsigned long long _persona;
    BOOL _hasReportedPresentingFromHostApp;
}

- (id)initWithPersona:(unsigned long long)a0;
- (void)didTapToolbarButton:(int)a0;
- (void)didLongTapToolbarButton:(int)a0;
- (void)didDismissWithMethod:(int)a0;
- (void)didPresentFromHostApp:(id)a0;

@end
