@class CNContactStore, NSArray, CNContactViewCache;

@interface CNContainerDataSource : NSObject

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) NSArray *containerPickerItems;
@property (retain, nonatomic) NSArray *containers;
@property (retain, nonatomic) CNContactViewCache *contactViewCache;
@property (nonatomic) BOOL ignoresExchangeContainers;

+ (id)os_log;

- (id)allAccounts;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)writableContainersForAccount:(id)a0;
- (void)discoverContainers;

@end
