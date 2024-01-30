@class BRCClientZone, BRCRelativePath, BRCServerItem, BRCDocumentItem, BRCPQLConnection, BRCPackageItem, BRCLocalItem, BRCDirectoryItem;

@interface BRCPathToItemLookup : NSObject {
    BRCLocalItem *_matchByFileID;
    BRCDocumentItem *_matchByDocumentID;
    BRCLocalItem *_matchByPath;
    BRCServerItem *_serverByPath;
    BRCPackageItem *_packageItem;
    BRCDirectoryItem *_parentItem;
    BRCLocalItem *_matchByFileIDGlobally;
    BRCDocumentItem *_matchByDocumentIDGlobally;
    BRCClientZone *_clientZone;
    struct { unsigned char byFileID : 1; unsigned char byDocumentID : 1; unsigned char byPath : 1; unsigned char parentItem : 1; unsigned char serverItem : 1; unsigned char serverByPath : 1; unsigned char packageItem : 1; unsigned char clientZone : 1; } _fetched;
}

@property (readonly, nonatomic) BRCRelativePath *relpathOfItem;
@property (readonly, nonatomic) BRCRelativePath *relpathOfFSEvent;
@property (readonly, nonatomic) BRCLocalItem *byPath;
@property (retain, nonatomic) BRCLocalItem *byFileID;
@property (readonly, retain) BRCLocalItem *byFileIDGlobally;
@property (retain, nonatomic) BRCDocumentItem *byDocumentID;
@property (readonly, retain) BRCDocumentItem *byDocumentIDGlobally;
@property (readonly, nonatomic) BRCServerItem *serverByPath;
@property (readonly, nonatomic) BRCDirectoryItem *parentItem;
@property (readonly, nonatomic) BRCClientZone *clientZone;
@property (readonly, nonatomic) BRCPQLConnection *db;

+ (id)lookupForRelativePath:(id)a0;

- (BOOL)_fetchByFileID:(BOOL)a0;
- (id)_byPathWithLastPathComponent:(id)a0;
- (BOOL)_fetchByPath;
- (id)description;
- (BOOL)_fetchByDocumentID:(BOOL)a0;
- (BOOL)_fetchClientZone;
- (void).cxx_destruct;
- (BOOL)_shareIDMatchesParent:(id)a0;
- (id)byPathWithLastPathComponent:(id)a0;
- (id)initWithRelativePath:(id)a0;
- (id)_resolveClientZoneWhileFetchingFileID:(BOOL)a0 fetchindDocID:(BOOL)a1;
- (id)initWithRelativePath:(id)a0 db:(id)a1;

@end
