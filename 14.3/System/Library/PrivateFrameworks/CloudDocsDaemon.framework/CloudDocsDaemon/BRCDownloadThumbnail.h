@interface BRCDownloadThumbnail : BRCDownload

- (int)kind;
- (id)description;
- (id)initWithDocument:(id)a0 stageID:(id)a1 etag:(id)a2;
- (BOOL)_stageWithSession:(id)a0 error:(id *)a1;

@end
