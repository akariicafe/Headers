@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *prefetchedDownloadExternalProperties;
@property (nonatomic) BOOL ignoreDivertedDownloads;
@property (copy, nonatomic) NSArray *downloadKinds;
@property (copy, nonatomic) NSString *persistenceIdentifier;
@property (copy, nonatomic) NSArray *prefetchedDownloadProperties;
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
