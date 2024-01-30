@class NSURL, NSSet, NSMutableDictionary;

@interface OZCopyFootageInfo : NSObject

@property (nonatomic) BOOL sizeIsValid;
@property (nonatomic) unsigned long long sizeInBytes;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSSet *nodeIDs;
@property (retain, nonatomic) NSMutableDictionary *associatedFilesSourceDestPaths;
@property (nonatomic) void *scene;

+ (unsigned long long)fileCount:(id)a0;
+ (id)fileURLToFootageInfoMap:(void *)a0 includeUnused:(BOOL)a1 destination:(id)a2;
+ (id)fileURLsForNode:(void *)a0;
+ (void)reconnectFootage:(id)a0 scene:(void *)a1;
+ (unsigned long long)totalSizeInBytes:(id)a0 forceUpdate:(BOOL)a1;
+ (void)updateSizes:(id)a0 forceUpdate:(BOOL)a1;

- (void)dealloc;
- (BOOL)updateSize:(BOOL)a0 error:(id *)a1;

@end
