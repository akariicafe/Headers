@interface _MFCRRecentContactABContext : NSObject {
    void *_existingPerson;
    void *_interimPerson;
    int _identifier;
}

- (int)identifier;
- (id)init;
- (void)dealloc;
- (void)setIdentifier:(int)a0;
- (void *)existingPerson;
- (void)setExistingPerson:(void *)a0;
- (void *)interimPerson;
- (void)setInterimPerson:(void *)a0;

@end
