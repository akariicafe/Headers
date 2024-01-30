@class NSString;
@protocol CDPWalrusStatusProvider, CDPWalrusStatusUpdater;

@interface CDPUIWalrusStatusChangeModel : NSObject <CDPUIStatusChangeModel> {
    id<CDPWalrusStatusProvider> _walrusStatusProvider;
    id<CDPWalrusStatusUpdater> _walrusStatusUpdater;
}

@property (readonly, nonatomic) unsigned long long targetStatus;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *messageText;
@property (readonly, nonatomic) NSString *primaryButtonText;
@property (readonly, nonatomic) NSString *cancelButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_hasLocalSecret;
- (void)_checkCurrentStatus:(id /* block */)a0;
- (void)_reportUserChoice:(unsigned long long)a0 error:(id)a1;
- (void)_updateUnderlyingValue:(id /* block */)a0;
- (id)initWithTargetStatus:(unsigned long long)a0 statusProvider:(id)a1 statusUpdater:(id)a2;

@end
