@interface SPRPersistenceFactory : SPRObject

- (id)makePersistingCoreDataWithEntity:(long long)a0 error:(id *)a1;
- (id)makePersistingFileBasedWithName:(id)a0 error:(id *)a1;
- (id)makeStackableFileBasedWithName:(id)a0 error:(id *)a1;

@end
