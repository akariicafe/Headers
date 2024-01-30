@class NSSet, CRKAnnotatedCredentialManifest, NSMutableDictionary;

@interface CRKASMCredentialManifest : NSObject

@property (readonly, nonatomic) CRKAnnotatedCredentialManifest *annotatedManifest;
@property (readonly, nonatomic) NSMutableDictionary *entriesByPersistentID;
@property (readonly, copy, nonatomic) NSSet *persistentIDs;

- (void).cxx_destruct;
- (id)entryForPersistentID:(id)a0;
- (id)initWithAnnotatedManifest:(id)a0;
- (id)makeEntryForPersistentID:(id)a0;

@end
