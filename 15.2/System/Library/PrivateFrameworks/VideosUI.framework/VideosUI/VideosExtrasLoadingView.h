@class NSString, NSDictionary, IKAppDocument, VideosExtrasActivityIndicator;
@protocol VideosExtrasLoadingViewDelegate;

@interface VideosExtrasLoadingView : UIView <IKAppDocumentDelegate> {
    IKAppDocument *_document;
    NSDictionary *_options;
    VideosExtrasActivityIndicator *_activityIndicator;
    id<VideosExtrasLoadingViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_show;
- (void).cxx_destruct;
- (void)documentDidUpdate:(id)a0;
- (void)documentNeedsUpdate:(id)a0;
- (id)initWithDocument:(id)a0 options:(id)a1 delegate:(id)a2;
- (void)startCountdownToVisibilityWithInterval:(double)a0;
- (void)cancelCountdownToVisibility;

@end
