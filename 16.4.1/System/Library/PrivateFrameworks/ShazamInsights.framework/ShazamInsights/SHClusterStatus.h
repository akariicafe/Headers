@class SHClusterMetadata, NSString, NSURL, NSDate;

@interface SHClusterStatus : NSObject

@property (retain, nonatomic) NSURL *dataURL;
@property (nonatomic) long long loadStatus;
@property (nonatomic) BOOL isDataValid;
@property (retain, nonatomic) SHClusterMetadata *metadata;
@property (readonly, copy, nonatomic) NSString *uniqueHash;
@property (readonly, copy, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) long long clusterType;

- (void).cxx_destruct;

@end
