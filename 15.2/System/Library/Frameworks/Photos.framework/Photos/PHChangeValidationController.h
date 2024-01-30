@class NSArray, NSString, NSOrderedSet, PLPhotoLibrary, NSManagedObjectContext;

@interface PHChangeValidationController : NSObject {
    BOOL _didPrepare;
}

@property (readonly, nonatomic) NSArray *renderedContentURLs;
@property (readonly, nonatomic) NSArray *assetsToChangeContent;
@property (readonly, nonatomic) NSArray *assetsToRevert;
@property (readonly, nonatomic) NSArray *assetsToHide;
@property (readonly, nonatomic) NSArray *assetsToDelete;
@property (readonly, nonatomic) NSArray *albumsToDelete;
@property (readonly, nonatomic) NSArray *foldersToDelete;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, nonatomic) BOOL confirmationRequired;
@property (readonly, nonatomic) NSOrderedSet *insertRequests;
@property (readonly, nonatomic) NSOrderedSet *updateRequests;
@property (readonly, nonatomic) NSOrderedSet *deleteRequests;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

- (BOOL)validateWithError:(id *)a0;
- (BOOL)_validateSimpleDeletionsWithValidators:(id)a0 requestsByObjectID:(id)a1 error:(id *)a2;
- (id)_simpleDeleteValidatorsWithManagedObjectContext:(id)a0;
- (BOOL)_prepareWithError:(id *)a0;
- (BOOL)promptForUserConfirmationWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3 renderedContentURLs:(id)a4;
- (void).cxx_destruct;
- (BOOL)promptForUserConfirmationWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3;
- (id)initWithInsertRequests:(id)a0 updateRequests:(id)a1 deleteRequests:(id)a2 context:(id)a3 photoLibrary:(id)a4;
- (BOOL)promptForUserConfirmationWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3 previewAssetLocalIdentifiers:(id)a4 revertToOriginal:(BOOL)a5;
- (BOOL)_recordObjectID:(id)a0 withSimpleDeleteValidators:(id)a1;
- (BOOL)_promptForUserConfirmationWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3 extensionItem:(id)a4;

@end
