@class NSString, NSDictionary, NSArray, PSQuotaInfo;

@interface ICQQuotaInfoResponse : AAResponse {
    BOOL _basicAccount;
    NSDictionary *_quotaInfoDict;
    NSDictionary *_storageInfo;
    NSDictionary *_urls;
    NSArray *_topToolbarItems;
    NSArray *_otherToolbarItems;
}

@property (readonly, nonatomic) NSString *manageStorageURLString;
@property (readonly, nonatomic) NSString *appDetailsURLString;
@property (readonly, nonatomic) NSString *totalStorageText;
@property (readonly, nonatomic) NSString *availableStorageText;
@property (readonly, nonatomic) NSDictionary *accountStatus;
@property (readonly, nonatomic, getter=isDetailed) BOOL detailed;
@property (readonly, retain, nonatomic) PSQuotaInfo *quotaInfo;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)usedStorage;
- (unsigned long long)totalStorage;
- (id)storageFooter:(BOOL)a0;
- (BOOL)hasPurchasedMoreStorage;
- (id)_sizeStringFromBytes:(id)a0;
- (unsigned long long)availableStorage;

@end
