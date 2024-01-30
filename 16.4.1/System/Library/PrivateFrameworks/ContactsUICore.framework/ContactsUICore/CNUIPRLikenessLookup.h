@class CNContactStore, NSString, CNUIMeContactMonitor;
@protocol CNSchedulerProvider, CNUIPlaceholderProviderFactory;

@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver>

@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (retain, nonatomic) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)basicMonogramObservableForContactFuture:(id)a0 monogramColor:(id)a1;
+ (id)contactFuture:(id)a0 contactStore:(id)a1 scheduler:(id)a2;
+ (id)photoObservableWithPhotoFuture:(id)a0 likenessFingerprint:(id)a1 scheduler:(id)a2;
+ (id)basicMonogramObservableFromString:(id)a0 color:(id)a1;
+ (id)observableFromLikenessProviderBlock:(id /* block */)a0 withScheduler:(id)a1;

- (id)likenessesForContact:(id)a0 options:(id)a1 workScheduler:(id)a2;
- (id)loadingPlaceholderWithPlaceholderProviderFactory:(id)a0;
- (BOOL)isMeContact:(id)a0;
- (id)resolveLikenessesForContacts:(id)a0 workScheduler:(id)a1 withContentHandler:(id /* block */)a2;
- (id)initWithContactStore:(id)a0 schedulerProvider:(id)a1 meMonitor:(id)a2;
- (id)basicMonogramObservableWithContactFuture:(id)a0 monogramColor:(id)a1;
- (id)silhouetteWithPlaceholderProviderFactory:(id)a0 contact:(id)a1 workScheduler:(id)a2;
- (id)likenessesForContact:(id)a0 workScheduler:(id)a1;
- (id)blessedPhotoObservableWithFuture:(id)a0 contact:(id)a1 workScheduler:(id)a2;
- (id)remoteImagesObservableWithContactFuture:(id)a0 workScheduler:(id)a1;
- (BOOL)mayIncludeSource:(long long)a0;
- (id)badgeObservableWithLikenessBadge:(id)a0 workScheduler:(id)a1;
- (id)initWithContactStore:(id)a0 scheduler:(id)a1;
- (id)photoFutureForContactFuture:(id)a0 photoFuture:(id)a1 allowingFallbackForMeCard:(BOOL)a2;
- (id)initWithContactStore:(id)a0 scheduler:(id)a1 meMonitor:(id)a2;
- (id)photoFutureForContactFuture:(id)a0 scheduler:(id)a1;
- (id)basicMonogramObservableFromString:(id)a0 color:(id)a1;
- (id)initWithContactStore:(id)a0 schedulerProvider:(id)a1;
- (void).cxx_destruct;
- (id)likenessObservableForContact:(id)a0 placeholderProviderFactory:(id)a1 options:(id)a2 workScheduler:(id)a3;
- (id)contentObservableForContact:(id)a0 placeholderProviderFactory:(id)a1 options:(id)a2 workScheduler:(id)a3;

@end
