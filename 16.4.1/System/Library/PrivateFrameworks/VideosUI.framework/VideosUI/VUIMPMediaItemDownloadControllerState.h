@class NSError;

@interface VUIMPMediaItemDownloadControllerState : NSObject <NSCopying>

@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadProgress;
@property (nonatomic) unsigned long long bytesToDownload;
@property (nonatomic) unsigned long long bytesDownloaded;
@property (nonatomic, getter=isDownloadInProgress) BOOL downloadInProgress;
@property (nonatomic) BOOL downloadSucceeded;
@property (retain, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
