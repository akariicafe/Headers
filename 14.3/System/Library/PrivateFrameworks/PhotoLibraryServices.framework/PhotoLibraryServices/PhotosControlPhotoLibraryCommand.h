@class PLPhotosCTL, NSURL, PHPhotoLibrary, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_group;

@interface PhotosControlPhotoLibraryCommand : PhotosControlCommand {
    NSManagedObjectContext *_moc;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_group> *_group;
    PLPhotosCTL *_ctl;
    struct _NSRange { unsigned long long location; unsigned long long length; } _argumentRangeForRunOnManagedObjects;
}

@property (readonly) NSURL *libraryURL;

+ (id)usage;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)longopts;
+ (const char *)optstring;
+ (id)usagesummary;
+ (id)libraryUsage;
+ (id)libraryUsagesummary;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)libraryLongopts;
+ (const char *)libraryOptstring;

- (id)managedObjectContext;
- (void).cxx_destruct;
- (id)photoLibrary;
- (int)save;
- (id)photosCtl;
- (void)enterGroup;
- (void)leaveGroup;
- (void)waitForGroup;
- (BOOL)processOption:(int)a0 arg:(id)a1;
- (id)initWithArgc:(int)a0 argv:(char **)a1 options:(unsigned char)a2 ctl:(id)a3;
- (void)configureWithAlternateURLToLibraryDatabase:(id)a0;
- (BOOL)argument:(id)a0 isValidDouble:(double *)a1;
- (void)setArgumentRangeForRunOnManagedObjects:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (int)runOnAssetArgumentsAllowAll:(BOOL)a0 additionalPredicate:(id)a1 block:(id /* block */)a2;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)a0 identifierPropertyKey:(id)a1 block:(id /* block */)a2;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)a0 identifierPropertyKey:(id)a1 allowAll:(BOOL)a2 additionalPredicate:(id)a3 sortDescriptors:(id)a4 block:(id /* block */)a5;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)a0 identifierPropertyKey:(id)a1 allowAll:(BOOL)a2 additionalPredicate:(id)a3 sortDescriptors:(id)a4 relationshipKeyPathsForPrefetching:(id)a5 block:(id /* block */)a6;
- (id)jsonDictionaryFromManagedObject:(id)a0 maxDepth:(unsigned long long)a1;
- (id)_jsonDictionaryFromManagedObject:(id)a0 allPreviousObjects:(id)a1 currentDepth:(unsigned long long)a2 maxDepth:(unsigned long long)a3;
- (id)jsonDictionaryFromError:(id)a0;
- (id)processBooleanOptionArg:(id)a0;
- (BOOL)libraryProcessOption:(char)a0 arg:(id)a1;
- (id)plPhotoLibrary;
- (int)runOnPhotoKitAssetArgumentsAllowAll:(BOOL)a0 propertySets:(id)a1 additionalPredicate:(id)a2 block:(id /* block */)a3;

@end
