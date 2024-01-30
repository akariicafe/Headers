@class NSArray;

@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration

@property (copy, nonatomic) NSArray *pendingItemIdentifiers;
@property (nonatomic) long long downloadEnabledItemCount;
@property (nonatomic) long long nonPurgeableItemCount;
@property (nonatomic) long long redownloadableItemCount;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
