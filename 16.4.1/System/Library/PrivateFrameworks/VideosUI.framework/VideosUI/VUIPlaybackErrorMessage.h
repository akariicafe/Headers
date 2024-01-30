@class NSURL, NSDictionary;

@interface VUIPlaybackErrorMessage : NSObject

@property (retain, nonatomic) NSURL *knownIssuesURL;
@property (retain, nonatomic) NSDictionary *deviceInfo;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_createQueryItemsFor:(id)a0 withDevice:(id)a1 withLanguageCode:(id)a2;
- (void)_getBaseURL:(id /* block */)a0;
- (id)_getLanguageCode;
- (void)_getLocalizedErrorMessageFrom:(id)a0 completion:(id /* block */)a1;
- (id)_getSessionInfoFor:(id)a0 withError:(id)a1;
- (void)_logMetricsWithMessageType:(id)a0 withSession:(id)a1 withDevice:(id)a2 withLanguageCode:(id)a3;
- (void)getLocalizedErrorMessageFor:(id)a0 withError:(id)a1 completion:(id /* block */)a2;

@end
