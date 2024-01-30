@interface SiriNLUOverrideProxy : NSObject {
    void /* unknown type, empty encoding */ overrideStores;
    void /* unknown type, empty encoding */ overrideResults;
    void /* unknown type, empty encoding */ swiftifiedInputs;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteWithOverrideNamespace:(int)a0 source:(int)a1;
- (id)initWithUseMemory:(BOOL)a0;
- (BOOL)insertWithCollection:(id)a0;
- (BOOL)isOverrideStoreValid;
- (id)matchWithInputs:(id)a0 overrideNamespace:(int)a1;

@end
