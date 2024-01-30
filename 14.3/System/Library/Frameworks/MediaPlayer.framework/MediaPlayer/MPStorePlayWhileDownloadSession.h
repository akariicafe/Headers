@class NSURL, NSDictionary;

@interface MPStorePlayWhileDownloadSession : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) unsigned long long downloadToken;
@property (copy, nonatomic) NSDictionary *purchaseBundle;
@property (copy, nonatomic) NSURL *sourceURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
