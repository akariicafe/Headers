@interface _MFCRRecentContactABContext : NSObject {
    void *_existingPerson;
    void *_interimPerson;
    int _identifier;
}

- (id)init;
- (void)dealloc;
- (void *)existingPerson;
- (void)setExistingPerson:(void *)a0;
- (void *)interimPerson;
- (void)setInterimPerson:(void *)a0;
- (void)setIdentifier:(int)a0;
- (int)identifier;

@end
