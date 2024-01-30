@class NSString, PLInternalResource, NSData, NSURL;

@interface PLFileSystemBookmark : PLManagedObject {
    NSURL *_fileSystemURL;
}

@property (retain, nonatomic) NSData *bookmarkData;
@property (retain, nonatomic) NSString *pathRelativeToVolume;
@property (retain, nonatomic) PLInternalResource *resource;

+ (id)entityName;
+ (id)fileSystemBookmarkFromURL:(id)a0 context:(id)a1;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (void).cxx_destruct;
- (id)fileSystemURL;
- (BOOL)supportsCloudUpload;

@end
