@interface CommandAndControlUI.CACLanguageViewBridge : NSObject <CommandAndControlUI.CACLanguageViewDelegate> {
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;

- (void)selectedLanguageWithIdentifier:(id)a0;
- (void)downloadLanguageWithIdentifier:(id)a0;
- (void)cancelDownloadWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)makeLanguageUIWithLocales:(id)a0;
- (void)updateInstallationStatusWith:(id)a0;
- (void)updateDownloadStatusWith:(id)a0;
- (void)setSelectedWithLanguageIdentifier:(id)a0;
- (id)makeLanguageUI;

@end
