@class DTTapServiceMessageSender;

@interface DTKTraceTapServiceDelegate : NSObject <DTTapServiceDelegate> {
    DTTapServiceMessageSender *_messageSender;
}

+ (void)registerCapabilities:(id)a0;

- (void).cxx_destruct;
- (void)didStop;
- (id)createConfigWithPlist:(id)a0;
- (id)initWithMessageSender:(id)a0;
- (BOOL)requiresExpiredPIDCacheForConfig:(id)a0;
- (id)willStartWithConfig:(id)a0;

@end
