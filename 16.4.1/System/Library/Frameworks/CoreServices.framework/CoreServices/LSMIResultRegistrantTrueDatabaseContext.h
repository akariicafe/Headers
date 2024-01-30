@class NSString, _LSDatabase;

@interface LSMIResultRegistrantTrueDatabaseContext : NSObject <LSMIResultRegistrantDatabaseContext> {
    struct LSContext { _LSDatabase *db; } _context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDatabase:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findContainerizedRecordForBundleUnit:(unsigned int)a0 error:(id *)a1;
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(id)a0 installDictionary:(id)a1 error:(id *)a2;
- (BOOL)fullBundleExistsForIdentifier:(id)a0 matchingNode:(id)a1;
- (id /* block */)unregisterApplicationWithBundleIdentifier:(id)a0 type:(unsigned int)a1 error:(id *)a2;

@end
