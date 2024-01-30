@class LPLinkMetadata;

@interface LPLinkMetadataDownloadProgressTransformer : NSObject

@property (nonatomic) unsigned long long bytesLoaded;
@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (nonatomic) long long downloadState;

- (void).cxx_destruct;
- (id)downloadProgressForTransformer:(id)a0;
- (id)initWithBytesLoaded:(unsigned long long)a0 downloadState:(long long)a1 metadata:(id)a2;

@end
