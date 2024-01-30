@class ML3MusicLibrary;
@protocol ML3DatabaseValidationDelegate;

@interface ML3DatabaseValidation : NSObject

@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (weak, nonatomic) id<ML3DatabaseValidationDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL truncateBeforeValidating;

- (BOOL)_internalUserAgreesToRebuildUnmigratableDatabase;
- (void)_logDatabasePathDirectoryAttributes;
- (BOOL)_performDatabasePreprocessingWithLibrary:(id)a0 error:(id *)a1;
- (BOOL)_performSchemaUpgradeWithLibrary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;
- (void)runValidation;
- (BOOL)_truncateDatabaseFileForLibrary:(id)a0 withError:(id *)a1;
- (BOOL)_validateLibraryDatabaseIfNecessary:(id)a0 withError:(id *)a1;

@end
