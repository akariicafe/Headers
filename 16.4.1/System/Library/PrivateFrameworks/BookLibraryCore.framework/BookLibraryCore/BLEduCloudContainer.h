@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface BLEduCloudContainer : NSObject

@property (retain, nonatomic) id cloudToken;
@property (readonly, nonatomic) NSURL *documentsURL;
@property (retain, nonatomic) NSURL *containerURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue;

+ (id)sharedEduCloudContainer;

- (id)allBookItems;
- (BOOL)isSignedIn;
- (id)init;
- (void).cxx_destruct;
- (id)bookItemForURL:(id)a0;
- (BOOL)_addOrUpdateCloudEntryWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)_coordinatedReadOfPromisesWithError:(id *)a0;
- (BOOL)_writePlist:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)addBookItem:(id)a0 error:(id *)a1;
- (id)bookItemForPermlink:(id)a0;
- (id)bookItemsForPermlinks:(id)a0;
- (id)cloudUrlForPermlink:(id)a0;
- (id)dictionaryAsBookItem:(id)a0 path:(id)a1;
- (id)fileNameForPermlink:(id)a0;
- (id)performMetadataActionOnCloudURL:(id)a0 action:(id /* block */)a1;
- (BOOL)removeBookItem:(id)a0 error:(id *)a1;
- (BOOL)updateBookItem:(id)a0 error:(id *)a1;

@end
