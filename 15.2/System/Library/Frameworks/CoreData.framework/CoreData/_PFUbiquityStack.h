@class PFUbiquityMetadataFactoryEntry, NSString, PFUbiquityLocation, NSManagedObjectContext;

@interface _PFUbiquityStack : NSObject {
    NSManagedObjectContext *_metadataMOC;
    PFUbiquityMetadataFactoryEntry *_metadataEntry;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootURL;
    NSString *_storeName;
    PFUbiquityLocation *_metadataStoreFileLocation;
}

- (id)description;
- (id)init;
- (void)dealloc;

@end
