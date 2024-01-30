@class NSSet;

@interface FLApprovedItemsFilter : NSObject {
    NSSet *_approvedItemIdentifiers;
    NSSet *_approvedClientIdentifiers;
}

+ (id)sharedFilter;

- (unsigned long long)approvalStatusForItem:(id)a0;
- (BOOL)overrideGroupRestrictionsForItem:(id)a0;
- (void).cxx_destruct;

@end
