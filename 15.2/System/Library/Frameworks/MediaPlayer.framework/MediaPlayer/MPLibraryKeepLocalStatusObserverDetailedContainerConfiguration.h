@class NSArray;

@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration

@property (copy, nonatomic) NSArray *pendingItemIdentifiers;
@property (nonatomic) long long downloadEnabledItemCount;
@property (nonatomic) long long nonPurgeableItemCount;
@property (nonatomic) long long redownloadableItemCount;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
