@class MSVSQLDatabase, NSString, MPMediaLibrary, MPMediaLibraryView;

@interface MPLibraryObjectDatabase : NSObject <MPObjectDatabase> {
    MSVSQLDatabase *_msvDatabase;
    MPMediaLibraryView *_libraryView;
}

@property (readonly, nonatomic) MPMediaLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiersMatchingIdentifierSet:(id)a0 propertySet:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (id)modelObjectMatchingIdentifierSet:(id)a0 propertySet:(id)a1 error:(id *)a2;
- (void)_enumerateRequestsForSupportedTypesWithPropertySet:(id)a0 identifiers:(id)a1 block:(id /* block */)a2;
- (id)identifiersForTokens:(id)a0;
- (id)tokenForIdentifiers:(id)a0 propertySet:(id)a1 options:(unsigned long long)a2;

@end
