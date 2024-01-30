@interface CRContext : NSObject {
    void /* unknown type, empty encoding */ crdtDatabase;
    void /* unknown type, empty encoding */ assetManager;
    void /* unknown type, empty encoding */ encryptionDelegate;
}

+ (id)newTransientContextObjC;

- (id)init;
- (void).cxx_destruct;

@end
