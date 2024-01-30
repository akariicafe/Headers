@class NSString, NSSet, NPSDomainAccessor, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, NTKPigmentPreferenceManagerDelegate;

@interface NTKPigmentPreferenceManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSUserDefaults *userDefault;
@property (retain, nonatomic) NPSDomainAccessor *npsDomainAccessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (copy, nonatomic) NSSet *selectedPigments;
@property (copy, nonatomic) NSSet *autoSelectedPigments;
@property (weak, nonatomic) id<NTKPigmentPreferenceManagerDelegate> delegate;

+ (BOOL)_shouldSaveAutoSelectedPigments:(id)a0 forCollectionName:(id)a1 userDefault:(id)a2;

- (id)initWithDomain:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_loadAutoSelectedPigments;
- (void)_loadVisibleOptions;
- (void)_threadunsafe_appendAutoSelectPigments:(id)a0;
- (BOOL)_threadunsafe_isOptionVisible:(id)a0;
- (void)_threadunsafe_removeAllAutoSelectPigments;
- (void)_threadunsafe_removeAutoSelectionWithOptionName:(id)a0;
- (void)_threadunsafe_setOptionName:(id)a0 visible:(BOOL)a1;
- (void)_threadunsafe_setOptionName:(id)a0 visible:(BOOL)a1 manual:(BOOL)a2;
- (void)_threadunsafe_syncAllContent;
- (void)_threadunsafe_syncAutoSelectedPigments:(id)a0;
- (void)_threadunsafe_syncVisibleOptionsByCollection:(id)a0;
- (void)handlePairedDeviceChanged;
- (BOOL)isOptionVisible:(id)a0;
- (void)resetContent;
- (void)setAutoSelectedPigments:(id)a0 forCollectionName:(id)a1;
- (void)setOption:(id)a0 visible:(BOOL)a1;

@end
