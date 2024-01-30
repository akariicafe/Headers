@interface NMSPartialMediaItemDownloadInfo : NMSMediaItemDownloadInfo

@property (readonly, nonatomic) unsigned long long minimumSize;
@property (readonly, nonatomic) unsigned long long offset;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 size:(unsigned long long)a1 manuallyAdded:(BOOL)a2 minimumSize:(unsigned long long)a3 offset:(unsigned long long)a4;

@end
