@class NSMutableDictionary;

@interface MPStoreLibraryMappingResponse : NSObject {
    NSMutableDictionary *_storeIdentifierSetToLibraryIdentifierSet;
}

@property (nonatomic) long long libraryAddedStatus;

- (id)libraryIdentifierSetForIdentifierSet:(id)a0;
- (void).cxx_destruct;
- (void)setLibraryIdentifierSet:(id)a0 forIdentifierSet:(id)a1;

@end
