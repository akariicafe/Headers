@interface _MFCRRecentContactABContext : NSObject {
    void *_existingPerson;
    void *_interimPerson;
    int _identifier;
}

- (int)identifier;
- (void)setIdentifier:(int)a0;
- (void)dealloc;
- (id)init;
- (void *)existingPerson;
- (void *)interimPerson;
- (void)setExistingPerson:(void *)a0;
- (void)setInterimPerson:(void *)a0;

@end
