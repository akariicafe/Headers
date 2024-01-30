@class NSString, NSHashTable, FCUserInfo;

@interface FCFeldsparIDProvider : NSObject <FCUserInfoObserving, FCFeldsparIDProvider>

@property (retain, nonatomic) FCUserInfo *userInfo;
@property (copy, nonatomic) NSString *feldsparID;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)registerUserInfo:(id)a0;
- (void)addObserver:(id)a0;
- (void)_updateFeldsparID:(id)a0;
- (void)userInfoDidChangeFeldsparID:(id)a0 fromCloud:(BOOL)a1;

@end
