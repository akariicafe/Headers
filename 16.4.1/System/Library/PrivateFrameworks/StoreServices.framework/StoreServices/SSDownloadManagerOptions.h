@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *prefetchedDownloadExternalProperties;
@property (nonatomic) BOOL ignoreDivertedDownloads;
@property (copy, nonatomic) NSArray *downloadKinds;
@property (copy, nonatomic) NSString *persistenceIdentifier;
@property (copy, nonatomic) NSArray *prefetchedDownloadProperties;
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
