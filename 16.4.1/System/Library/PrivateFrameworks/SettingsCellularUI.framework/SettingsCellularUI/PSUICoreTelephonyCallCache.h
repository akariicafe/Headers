@class CXCallObserver;

@interface PSUICoreTelephonyCallCache : NSObject

@property (retain, nonatomic) CXCallObserver *callObserver;

+ (id)sharedInstance;

- (id)getLogger;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isAnyCallActive;
- (id)initPrivate:(id)a0;
- (BOOL)isActiveCallSubtype:(const char *)a0;
- (BOOL)isActiveCallVoLTE;
- (BOOL)isActiveCallVoNR;
- (BOOL)isAnyCallActiveForProviderIdentifier:(id)a0;
- (BOOL)isAnyTelephonyCallActive;
- (BOOL)isAnyVOIPCallActive;
- (id)localizedPhoneNumber:(id)a0 context:(id)a1;

@end
