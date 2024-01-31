@class NSBundle, NSString, NSURL, NSDictionary, NSManagedObjectModel;

@interface NSManagedObjectModelReference : NSObject

@property (retain) NSURL *fileURL;
@property (retain) NSBundle *bundle;
@property (retain) NSString *modelName;
@property (retain) NSDictionary *entityVersionHashes;
@property (retain) NSManagedObjectModel *model;
@property (readonly) NSManagedObjectModel *resolvedModel;
@property (readonly) NSString *versionChecksum;

- (void)dealloc;
- (BOOL)resolve:(id *)a0;
- (id)initWithEntityVersionHashes:(id)a0 inBundle:(id)a1 versionChecksum:(id)a2;
- (id)initWithFileURL:(id)a0 versionChecksum:(id)a1;
- (id)initWithModel:(id)a0 versionChecksum:(id)a1;
- (id)initWithName:(id)a0 inBundle:(id)a1 versionChecksum:(id)a2;
- (void)unresolve;

@end
