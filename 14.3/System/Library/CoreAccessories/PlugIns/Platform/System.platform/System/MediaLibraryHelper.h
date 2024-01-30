@class NSString, WorkspaceObserver;

@interface MediaLibraryHelper : NSObject <WorkspaceObserverDelegate> {
    WorkspaceObserver *_workspaceObserver;
    BOOL _iTunesRadioEnabled;
}

@property (readonly) BOOL showMusic;
@property (readonly) BOOL showPodcasts;
@property (readonly) BOOL showAudioBooks;
@property (readonly) BOOL iTunesRadioEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)applicationsWillUninstall:(id)a0;
- (void)dealloc;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)_updateITunesRadioEnabled;
- (void)handleAppInstall:(id)a0;
- (void)handleAppUninstall:(id)a0;
- (int)getFilteredMediaTypesMask:(int)a0;

@end
