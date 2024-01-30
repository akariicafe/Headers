@class NSArray, MPModelObject, MPMediaLibrary;

@interface MPModelLibraryStoreIDsImportChangeRequestOperation : MPAsyncOperation

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) MPModelObject *referralObject;
@property (copy, nonatomic) NSArray *storeIDs;
@property (nonatomic) BOOL shouldLibraryAdd;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;

@end
