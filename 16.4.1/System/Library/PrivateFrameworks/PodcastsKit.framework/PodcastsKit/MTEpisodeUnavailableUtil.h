@interface MTEpisodeUnavailableUtil : MTSingleton

+ (id)longReasonTextForNoInternet;
+ (id)longStringForUnavailableReason:(unsigned long long)a0 podcastTitle:(id)a1;
+ (id)stringForUnavailableReason:(unsigned long long)a0;
+ (unsigned long long)unavailableReasonForEpisode:(id)a0;

- (void)_presentErrorDialogWithTitle:(id)a0 message:(id)a1 handler:(id /* block */)a2;
- (BOOL)showDialogForReason:(unsigned long long)a0 podcastTitle:(id)a1 completion:(id /* block */)a2;

@end
