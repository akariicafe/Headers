@class CXCallObserver;

@interface PSUICoreTelephonyCallCache : NSObject

@property (retain, nonatomic) CXCallObserver *callObserver;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)localizedPhoneNumber:(id)a0 context:(id)a1;
- (BOOL)isAnyCallActive;
- (BOOL)isAnyVOIPCallActive;
- (BOOL)isActiveCallVoLTE;
- (id)initPrivate:(id)a0;
- (BOOL)isAnyCallActiveForProviderIdentifier:(id)a0;
- (BOOL)isAnyTelephonyCallActive;

@end
