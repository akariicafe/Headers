@class NSData;

@interface CKXDistributedTimestamp : NSObject

@property (retain, nonatomic) NSData *siteIdentifier;
@property (nonatomic) unsigned char modifier;
@property (nonatomic) long long clock;
@property (nonatomic) BOOL unordered;

- (void).cxx_destruct;

@end
