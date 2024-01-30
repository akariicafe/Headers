@class NSManagedObjectContext, CKSharedDatabase;

@interface CKCourseLibrary : NSObject

@property (retain, nonatomic) CKSharedDatabase *sharedDatabase;
@property (retain, nonatomic) NSManagedObjectContext *moc;

+ (id)sharedDocumentsDirectory;
+ (id)sharedCourseLibrary;
+ (BOOL)isCourseLibraryAvailable;
+ (BOOL)openCourse:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)allCourses;
- (id)courseWithCourseID:(id)a0;
- (id)courseLibrayVersion;

@end
