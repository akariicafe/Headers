@class PLPhotosCTL, NSString, NSURL, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_group, _PhotosControlPhotoLibraryPhotoKit;

@interface PhotosControlPhotoLibraryCommand : PhotosControlCommand {
    NSManagedObjectContext *_moc;
    NSURL *_libraryURL;
    NSObject<OS_dispatch_group> *_group;
    PLPhotosCTL *_ctl;
    struct _NSRange { unsigned long long location; unsigned long long length; } _argumentRangeForRunOnManagedObjects;
}

@property (retain) id<_PhotosControlPhotoLibraryPhotoKit> photoKitProxy;
@property (readonly) NSURL *libraryURL;
@property (readonly) NSString *libraryArg;

+ (id)usage;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)libraryLongopts;
+ (const char *)libraryOptstring;
+ (id)libraryUsage;
+ (id)libraryUsagesummary;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)longopts;
+ (const char *)optstring;
+ (id)usagesummary;

- (id)managedObjectContext;
- (id)photoLibrary;
- (int)save;
- (void).cxx_destruct;
- (id)_jsonDictionaryFromManagedObject:(id)a0 allPreviousObjects:(id)a1 currentDepth:(unsigned long long)a2 maxDepth:(unsigned long long)a3;
- (BOOL)argument:(id)a0 isValidDouble:(double *)a1;
- (void)configureWithAlternateURLToLibraryDatabase:(id)a0;
- (void)enterGroup;
- (id)initWithArgc:(int)a0 argv:(char **)a1 ctl:(id)a2;
- (id)jsonDictionaryFromError:(id)a0;
- (id)jsonDictionaryFromManagedObject:(id)a0 maxDepth:(unsigned long long)a1;
- (void)leaveGroup;
- (BOOL)libraryProcessOption:(int)a0 arg:(id)a1;
- (id)libraryURLFromArgument:(id)a0;
- (id)photosCtl;
- (id)plPhotoLibrary;
- (id)processBooleanOptionArg:(id)a0;
- (BOOL)processOption:(int)a0 arg:(id)a1;
- (int)runOnAssetArgumentsAllowAll:(BOOL)a0 additionalPredicate:(id)a1 block:(id /* block */)a2;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)a0 identifierPropertyKey:(id)a1 allowAll:(BOOL)a2 additionalPredicate:(id)a3 sortDescriptors:(id)a4 block:(id /* block */)a5;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)a0 identifierPropertyKey:(id)a1 allowAll:(BOOL)a2 additionalPredicate:(id)a3 sortDescriptors:(id)a4 relationshipKeyPathsForPrefetching:(id)a5 block:(id /* block */)a6;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)a0 identifierPropertyKey:(id)a1 block:(id /* block */)a2;
- (int)runOnPhotoKitAssetArgumentsAllowAll:(BOOL)a0 propertySets:(id)a1 additionalPredicate:(id)a2 block:(id /* block */)a3;
- (void)setArgumentRangeForRunOnManagedObjects:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)waitForGroup;

@end
