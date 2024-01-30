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

- (void)applicationsDidInstall:(id)a0;
- (void)dealloc;
- (void)applicationsWillUninstall:(id)a0;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;
- (void)_updateITunesRadioEnabled;
- (int)getFilteredMediaTypesMask:(int)a0;
- (void)handleAppInstall:(id)a0;
- (void)handleAppUninstall:(id)a0;

@end
