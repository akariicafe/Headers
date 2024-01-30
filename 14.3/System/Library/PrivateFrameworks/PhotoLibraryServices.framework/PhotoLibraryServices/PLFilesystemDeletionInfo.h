@class NSArray, NSString, NSURL;

@interface PLFilesystemDeletionInfo : NSObject

@property (retain) NSArray *fileURLs;
@property (retain) NSString *thumbnailIdentifier;
@property (readonly) NSURL *objectIDURI;
@property (readonly) unsigned long long thumbnailIndex;
@property (readonly) NSString *uuid;
@property (readonly) unsigned long long timestamp;
@property (readonly) NSString *directory;
@property (readonly) NSString *filename;

+ (id)deletionInfoWithAsset:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectIDURI:(id)a0 directory:(id)a1 filename:(id)a2 fileURLs:(id)a3 thumbnailIndex:(unsigned long long)a4 thumbnailIdentifier:(id)a5 uuid:(id)a6 timestamp:(unsigned long long)a7;

@end
