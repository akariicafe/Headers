@interface SFBrowserPersonaAnalyticsHelper : NSObject {
    long long _persona;
    BOOL _hasReportedPresentingFromHostApp;
}

- (id)initWithPersona:(long long)a0;
- (void)didDismissWithMethod:(int)a0;
- (void)didLongTapToolbarButton:(int)a0;
- (void)didPresentFromHostApp:(id)a0;

@end
