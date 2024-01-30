@class NSManagedObjectContext, CKSharedDatabase;

@interface CKCourseLibrary : NSObject

@property (retain, nonatomic) CKSharedDatabase *sharedDatabase;
@property (retain, nonatomic) NSManagedObjectContext *moc;

+ (id)sharedDocumentsDirectory;
+ (id)sharedCourseLibrary;
+ (BOOL)isCourseLibraryAvailable;
+ (BOOL)openCourse:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)allCourses;
- (id)courseWithCourseID:(id)a0;
- (id)courseLibrayVersion;

@end
