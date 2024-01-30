@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) CXCallDirectoryManager *callDirectoryManager;
@property (readonly, nonatomic) int identificationEntriesChangedNotifyToken;
@property (copy, nonatomic) id /* block */ countryDialingCode;
@property (copy, nonatomic) id /* block */ firstIdentificationEntriesForEnabledExtensions;

- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
