@class TVPPlaybackReportingEventCollection;
@protocol TVPSecureKeyLoaderDelegate;

@interface TVPSecureKeyLoader : NSObject

@property (weak, nonatomic) id<TVPSecureKeyLoaderDelegate> delegate;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;

- (void).cxx_destruct;
- (void)sendStopRequest;
- (void)startLoadingCertificateDataForRequest:(id)a0;
- (void)startLoadingContentIdentifierDataForRequest:(id)a0;
- (void)startLoadingKeyResponseDataForRequest:(id)a0;

@end
