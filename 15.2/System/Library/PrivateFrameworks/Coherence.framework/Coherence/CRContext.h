@interface CRContext : NSObject {
    void /* unknown type, empty encoding */ crdtDatabase;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ temporaryIDs;
    void /* unknown type, empty encoding */ assetManager;
    void /* unknown type, empty encoding */ encryptionDelegate;
    void /* unknown type, empty encoding */ subcapsuleManager;
}

+ (id)newObjCReplicaFor:(id)a0;

- (id)objCRenames;
- (void)retainObjCSequence:(id)a0;
- (void)releaseObjCSequence:(id)a0;
- (void)retainOrReleaseWithInitial:(id)a0 current:(id)a1 forReplica:(id)a2 copyingFrom:(id)a3;
- (void)retainOrReleaseWithInitial:(id)a0 current:(id)a1 forReplica:(id)a2;
- (id)renameObjCSequence:(id)a0 after:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
