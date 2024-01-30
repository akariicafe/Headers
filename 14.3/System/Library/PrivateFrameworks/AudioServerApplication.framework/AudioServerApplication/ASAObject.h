@class NSArray;

@interface ASAObject : NSObject

@property (readonly, nonatomic) unsigned int objectID;
@property (readonly, nonatomic) unsigned int baseClass;
@property (readonly, nonatomic) unsigned int objectClass;
@property (readonly, nonatomic) unsigned int ownerID;
@property (readonly, copy, nonatomic) NSArray *ownedObjectIDs;

- (id)init;
- (unsigned int)objectClass;
- (unsigned int)ownerID;
- (BOOL)getMasterGlobalProperty:(unsigned int)a0 withData:(void *)a1 ofSize:(unsigned int *)a2 withQualifier:(void *)a3 ofSize:(unsigned int)a4;
- (BOOL)setMasterOutputProperty:(unsigned int)a0 withData:(void *)a1 ofSize:(unsigned int)a2 withQualifier:(void *)a3 ofSize:(unsigned int)a4;
- (BOOL)setMasterInputProperty:(unsigned int)a0 withData:(void *)a1 ofSize:(unsigned int)a2 withQualifier:(void *)a3 ofSize:(unsigned int)a4;
- (id)initWithAudioObjectID:(unsigned int)a0;
- (BOOL)setMasterGlobalProperty:(unsigned int)a0 withData:(void *)a1 ofSize:(unsigned int)a2 withQualifier:(void *)a3 ofSize:(unsigned int)a4;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)coreAudioClassName;
- (BOOL)getMasterInputProperty:(unsigned int)a0 withData:(void *)a1 ofSize:(unsigned int *)a2 withQualifier:(void *)a3 ofSize:(unsigned int)a4;
- (BOOL)getMasterOutputProperty:(unsigned int)a0 withData:(void *)a1 ofSize:(unsigned int *)a2 withQualifier:(void *)a3 ofSize:(unsigned int)a4;
- (unsigned int)sizeOfMasterGlobalProperty:(unsigned int)a0 withQualifier:(void *)a1 ofSize:(unsigned int)a2;
- (unsigned int)sizeOfMasterInputProperty:(unsigned int)a0 withQualifier:(void *)a1 ofSize:(unsigned int)a2;
- (unsigned int)sizeOfMasterOutputProperty:(unsigned int)a0 withQualifier:(void *)a1 ofSize:(unsigned int)a2;
- (unsigned int)baseClass;
- (BOOL)hasMasterGlobalProperty:(unsigned int)a0;
- (BOOL)hasProperty:(unsigned int)a0 scope:(unsigned int)a1 ofElement:(unsigned int)a2;
- (unsigned int)sizeOfProperty:(unsigned int)a0 scope:(unsigned int)a1 ofElement:(unsigned int)a2 withQualifier:(void *)a3 ofSize:(unsigned int)a4;
- (BOOL)getProperty:(unsigned int)a0 scope:(unsigned int)a1 ofElement:(unsigned int)a2 withData:(void *)a3 ofSize:(unsigned int *)a4 withQualifier:(void *)a5 ofSize:(unsigned int)a6;
- (BOOL)setProperty:(unsigned int)a0 scope:(unsigned int)a1 ofElement:(unsigned int)a2 withData:(void *)a3 ofSize:(unsigned int)a4 withQualifier:(void *)a5 ofSize:(unsigned int)a6;
- (BOOL)isPropertySettable:(unsigned int)a0 scope:(unsigned int)a1 ofElement:(unsigned int)a2;
- (BOOL)onQueue:(id)a0 forProperty:(unsigned int)a1 scope:(unsigned int)a2 ofElement:(unsigned int)a3 addListener:(id /* block */)a4;
- (BOOL)onQueue:(id)a0 forProperty:(unsigned int)a1 scope:(unsigned int)a2 ofElement:(unsigned int)a3 removeListener:(id /* block */)a4;
- (id)ownedObjectIDs;
- (BOOL)hasInputProperty:(unsigned int)a0 ofElement:(unsigned int)a1;
- (BOOL)hasMasterInputProperty:(unsigned int)a0;
- (BOOL)hasOutputProperty:(unsigned int)a0 ofElement:(unsigned int)a1;
- (BOOL)hasMasterOutputProperty:(unsigned int)a0;
- (BOOL)hasGlobalProperty:(unsigned int)a0 ofElement:(unsigned int)a1;
- (unsigned int)sizeOfInputProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withQualifier:(void *)a2 ofSize:(unsigned int)a3;
- (unsigned int)sizeOfOutputProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withQualifier:(void *)a2 ofSize:(unsigned int)a3;
- (unsigned int)sizeOfGlobalProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withQualifier:(void *)a2 ofSize:(unsigned int)a3;
- (BOOL)getInputProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withData:(void *)a2 ofSize:(unsigned int *)a3 withQualifier:(void *)a4 ofSize:(unsigned int)a5;
- (BOOL)getOutputProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withData:(void *)a2 ofSize:(unsigned int *)a3 withQualifier:(void *)a4 ofSize:(unsigned int)a5;
- (BOOL)getGlobalProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withData:(void *)a2 ofSize:(unsigned int *)a3 withQualifier:(void *)a4 ofSize:(unsigned int)a5;
- (BOOL)setInputProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withData:(void *)a2 ofSize:(unsigned int)a3 withQualifier:(void *)a4 ofSize:(unsigned int)a5;
- (BOOL)setOutputProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withData:(void *)a2 ofSize:(unsigned int)a3 withQualifier:(void *)a4 ofSize:(unsigned int)a5;
- (BOOL)setGlobalProperty:(unsigned int)a0 ofElement:(unsigned int)a1 withData:(void *)a2 ofSize:(unsigned int)a3 withQualifier:(void *)a4 ofSize:(unsigned int)a5;
- (BOOL)isInputPropertySettable:(unsigned int)a0 ofElement:(unsigned int)a1;
- (BOOL)isMasterInputPropertySettable:(unsigned int)a0;
- (BOOL)isOutputPropertySettable:(unsigned int)a0 ofElement:(unsigned int)a1;
- (BOOL)isMasterOutputPropertySettable:(unsigned int)a0;
- (BOOL)isGlobalPropertySettable:(unsigned int)a0 ofElement:(unsigned int)a1;
- (BOOL)isMasterGlobalPropertySettable:(unsigned int)a0;
- (BOOL)onQueue:(id)a0 forInputProperty:(unsigned int)a1 ofElement:(unsigned int)a2 addListener:(id /* block */)a3;
- (BOOL)onQueue:(id)a0 forMasterInputProperty:(unsigned int)a1 addListener:(id /* block */)a2;
- (BOOL)onQueue:(id)a0 forOutputProperty:(unsigned int)a1 ofElement:(unsigned int)a2 addListener:(id /* block */)a3;
- (BOOL)onQueue:(id)a0 forMasterOutputProperty:(unsigned int)a1 addListener:(id /* block */)a2;
- (BOOL)onQueue:(id)a0 forGlobalProperty:(unsigned int)a1 ofElement:(unsigned int)a2 addListener:(id /* block */)a3;
- (BOOL)onQueue:(id)a0 forMasterGlobalProperty:(unsigned int)a1 addListener:(id /* block */)a2;
- (BOOL)onQueue:(id)a0 forInputProperty:(unsigned int)a1 ofElement:(unsigned int)a2 removeListener:(id /* block */)a3;
- (BOOL)onQueue:(id)a0 forMasterInputProperty:(unsigned int)a1 removeListener:(id /* block */)a2;
- (BOOL)onQueue:(id)a0 forOutputProperty:(unsigned int)a1 ofElement:(unsigned int)a2 removeListener:(id /* block */)a3;
- (BOOL)onQueue:(id)a0 forMasterOutputProperty:(unsigned int)a1 removeListener:(id /* block */)a2;
- (BOOL)onQueue:(id)a0 forGlobalProperty:(unsigned int)a1 ofElement:(unsigned int)a2 removeListener:(id /* block */)a3;
- (BOOL)onQueue:(id)a0 forMasterGlobalProperty:(unsigned int)a1 removeListener:(id /* block */)a2;

@end
