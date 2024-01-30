@class NSURL, NSString;

@interface TAPersistenceManagerSettings : NSObject

@property (retain, nonatomic) NSURL *persistenceDirectoryURL;
@property (retain, nonatomic) NSString *persistenceStoreFileName;

- (id)_getStoreURL;
- (id)initWithDirectoryURLOrDefault:(id)a0 storeFileNameOrDefault:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
