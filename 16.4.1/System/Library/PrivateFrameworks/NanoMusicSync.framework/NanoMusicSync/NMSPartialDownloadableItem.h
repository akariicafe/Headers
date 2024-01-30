@interface NMSPartialDownloadableItem : NMSDownloadableItem

@property (readonly, nonatomic) unsigned long long minimumSize;
@property (readonly, nonatomic) unsigned long long offset;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMediaLibraryIdentifier:(id)a0 externalLibraryIdentifier:(id)a1 size:(unsigned long long)a2 itemType:(unsigned long long)a3 manuallyAdded:(BOOL)a4 minimumSize:(unsigned long long)a5 offset:(unsigned long long)a6;

@end
