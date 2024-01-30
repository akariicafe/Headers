@class OISFUZipArchive, NSMutableDictionary;

@interface TCBundleResourcePackage : NSObject {
    OISFUZipArchive *mZipArchive;
    NSMutableDictionary *mEntryMap;
}

- (void).cxx_destruct;
- (id)initWithZipArchive:(id)a0;
- (id)entryWithName:(id)a0 cacheResult:(BOOL)a1;

@end
