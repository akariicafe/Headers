@class NSDictionary, NSArray;

@interface LPMedia : NSObject

@property (class, readonly) NSDictionary *contentTypeToSubclassMap;
@property (class, readonly) NSArray *supportedContentTypes;

@property unsigned int ioMedia;

+ (id)allMedia;
+ (id)mediaForBSDNameOrDeviceNode:(id)a0;
+ (id)mediaForPath:(id)a0;
+ (id)mediaOfCorrectTypeGivenIOMedia:(unsigned int)a0;
+ (id)mediaForPath:(id)a0 snapshotName:(id *)a1;
+ (id)liveMediaForSnapshotAtPath:(id)a0;
+ (unsigned int)_copyIOMediaForDiskWithPath:(id)a0;
+ (unsigned int)_copyLiveFilesystemIOMediaForRootedSnapshot;
+ (id)mediaForPath:(id)a0 isSnapshot:(BOOL *)a1;
+ (id)snapshotNameForMediaForPath:(id)a0;
+ (id)mediaForUUID:(id)a0;

- (id)mountPoint;
- (BOOL)isInternal;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)dealloc;
- (id)content;
- (id)mediaUUID;
- (id)BSDName;
- (id)initWithIOMediaObject:(unsigned int)a0;
- (id)getStringPropertyWithName:(id)a0;
- (BOOL)getBoolPropertyWithName:(id)a0;
- (id)devNodePath;
- (BOOL)isWhole;
- (BOOL)isInternalAndIsRootDevice:(BOOL *)a0;
- (id)wholeMediaForMedia;
- (BOOL)setName:(id)a0 withError:(id *)a1;

@end
