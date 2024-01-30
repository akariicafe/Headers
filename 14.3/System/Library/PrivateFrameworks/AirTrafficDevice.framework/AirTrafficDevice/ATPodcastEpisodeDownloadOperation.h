@class ICURLSession, ICURLRequest;

@interface ATPodcastEpisodeDownloadOperation : ATStoreDownloadOperation {
    ICURLSession *_session;
    ICURLRequest *_request;
}

- (void)cancel;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)_urlSession;
- (id)_podcastsAppBundleID;

@end
