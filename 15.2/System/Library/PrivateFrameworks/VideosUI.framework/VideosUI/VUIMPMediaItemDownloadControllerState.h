@interface VUIMPMediaItemDownloadControllerState : NSObject <NSCopying>

@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadProgress;
@property (nonatomic) unsigned long long bytesToDownload;
@property (nonatomic) unsigned long long bytesDownloaded;
@property (nonatomic, getter=isDownloadInProgress) BOOL downloadInProgress;
@property (nonatomic) BOOL downloadSucceeded;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
