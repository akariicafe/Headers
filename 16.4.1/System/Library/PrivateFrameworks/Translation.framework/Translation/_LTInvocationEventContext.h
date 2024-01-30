@class NSString, _LTLocalePair;

@interface _LTInvocationEventContext : NSObject

@property (nonatomic) BOOL isOnDevice;
@property (nonatomic) BOOL explicitLanguageFilterEnabled;
@property (nonatomic) BOOL languageIDEnabled;
@property (retain, nonatomic) NSString *configVersion;
@property (nonatomic) long long task;
@property (nonatomic) long long inputMode;
@property (nonatomic) long long uiMode;
@property (retain, nonatomic) _LTLocalePair *languagePair;

- (id)init;
- (void).cxx_destruct;
- (id)locales;
- (id)logCancelledWithReason:(id)a0 qssSessionID:(id)a1;
- (id)logEndedWithQSSSessionID:(id)a0;
- (id)logFailedWithError:(id)a0 qssSessionID:(id)a1;
- (id)logStartedOrChanged;

@end
