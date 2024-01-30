@class NSString, NSURL, NSDate;

@interface TSPDocumentResourceCacheEntry : NSObject

@property (readonly, nonatomic) NSString *digestString;
@property (nonatomic) long long accessCount;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSDate *contentAccessDate;
@property (nonatomic) BOOL wasDownloaded;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDigestString:(id)a0;

@end
