@class CXCallObserver, Logger;

@interface PSUICoreTelephonyCallCache : NSObject {
    Logger *_logger;
}

@property (retain, nonatomic) CXCallObserver *callObserver;

+ (id)sharedInstance;

- (id)getLogger;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)localizedPhoneNumber:(id)a0 context:(id)a1;
- (BOOL)isAnyCallActive;
- (BOOL)isAnyVOIPCallActive;
- (BOOL)isActiveCallVoLTE;
- (id)initPrivate:(id)a0;
- (BOOL)isAnyCallActiveForProviderIdentifier:(id)a0;
- (BOOL)isActiveCallSubtype:(struct __CFString { } *)a0;
- (BOOL)isAnyTelephonyCallActive;

@end
