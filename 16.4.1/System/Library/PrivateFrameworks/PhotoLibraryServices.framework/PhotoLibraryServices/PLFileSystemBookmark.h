@class NSData, NSString, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject

@property (retain, nonatomic) NSData *bookmarkData;
@property (retain, nonatomic) NSString *pathRelativeToVolume;
@property (retain, nonatomic) PLInternalResource *resource;

+ (id)entityName;
+ (id)fileSystemBookmarkFromURL:(id)a0 context:(id)a1;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)supportsCloudUpload;
- (id)fileSystemURL;

@end
