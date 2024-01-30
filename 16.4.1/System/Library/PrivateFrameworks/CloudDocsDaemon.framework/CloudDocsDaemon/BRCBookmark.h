@class BRCLocalItem, BRCAccountSession, BRCAppLibrary, NSData, BRCServerZone, BRCRelativePath;

@interface BRCBookmark : NSObject {
    BRCAccountSession *_session;
    BRCAppLibrary *_appLibrary;
    NSData *_bookmarkData;
    BRCLocalItem *_target;
    BRCServerZone *_targetServerZone;
    BRCRelativePath *_targetRelpath;
    BOOL _targetResolved;
    BOOL _dataResolved;
    BOOL _containsItemID;
}

@property (readonly, nonatomic) BOOL containsItemID;
@property (readonly, nonatomic) BRCServerZone *targetServerZone;
@property (readonly, nonatomic) BRCLocalItem *target;

+ (id)createName;
+ (void)unlinkAliasAtPath:(id)a0;

- (void).cxx_destruct;
- (void)_computeSignature:(unsigned char[32])a0;
- (BOOL)_resolveDataWithError:(id *)a0;
- (BOOL)_resolveTargetWithError:(id *)a0;
- (int)_validateSignatureWithFd:(int)a0;
- (id)initWithRelpath:(id)a0;
- (id)initWithTarget:(id)a0 owningAppLibrary:(id)a1 path:(id)a2 session:(id)a3;
- (BOOL)resolveWithError:(id *)a0;
- (id)writeUnderParent:(id)a0 name:(id)a1 error:(id *)a2;

@end
