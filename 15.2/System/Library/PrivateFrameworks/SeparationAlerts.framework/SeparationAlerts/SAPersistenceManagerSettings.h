@class NSURL, NSString;

@interface SAPersistenceManagerSettings : NSObject

@property (retain, nonatomic) NSURL *persistenceDirectoryURL;
@property (retain, nonatomic) NSString *persistenceStoreFileName;

- (id)_getStoreURL;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDirectoryURLOrDefault:(id)a0 storeFileNameOrDefault:(id)a1;

@end
