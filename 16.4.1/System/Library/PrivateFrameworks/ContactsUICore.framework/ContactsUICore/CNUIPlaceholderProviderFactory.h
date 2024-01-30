@class NSString;
@protocol CNUIPRLikenessProvider, CNScheduler;

@interface CNUIPlaceholderProviderFactory : NSObject <CNUIPlaceholderProviderFactory> {
    id<CNUIPRLikenessProvider> _placeholderProvider;
    id<CNUIPRLikenessProvider> _organizationPlaceholderProvider;
    id<CNUIPRLikenessProvider> _loadingPlaceholderProvider;
}

@property (retain, nonatomic) id<CNScheduler> resourceLock;
@property (retain, nonatomic) id<CNScheduler> highPriorityLock;
@property (readonly) id<CNUIPRLikenessProvider> placeholderProvider;
@property (readonly) id<CNUIPRLikenessProvider> loadingPlaceholderProvider;
@property (readonly) id<CNUIPRLikenessProvider> loadingGroupPlaceholderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
