@class NSString, WLRequest;
@protocol WLQRCodeProviderDelegate;

@interface WLQRCodeProvider : NSObject <WLRequestDelegate> {
    WLRequest *_request;
}

@property (weak, nonatomic) id<WLQRCodeProviderDelegate> delegate;
@property (nonatomic) BOOL useGooglePlayStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request;
- (void).cxx_destruct;
- (void)requestDidFinish:(BOOL)a0;

@end
