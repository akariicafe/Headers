@class NSMutableDictionary;

@interface SBHIconStateUnarchivingSlugIconSource : NSObject <SBHIconStateUnarchiverIconSource> {
    NSMutableDictionary *_leafAppIcons;
}

- (id)leafIconForIdentifier:(id)a0;
- (id)applicationIconForBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
