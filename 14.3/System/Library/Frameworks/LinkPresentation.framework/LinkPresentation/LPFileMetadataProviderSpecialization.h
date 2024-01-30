@class LPLinkMetadata, NSString, LPFileMetadata, NSURL, LPImage, NSObject;
@protocol OS_dispatch_group;

@interface LPFileMetadataProviderSpecialization : LPMetadataProviderSpecialization <LPMetadataProviderSpecializationDelegate> {
    BOOL _cancelled;
    NSURL *_temporaryFileURL;
    LPImage *_originalImage;
    LPImage *_quickLookThumbnail;
    NSString *_MIMEType;
    NSString *_UTI;
    LPLinkMetadata *_metadata;
    LPFileMetadata *_fileMetadata;
    NSObject<OS_dispatch_group> *_fetchGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_thumbnailQueue;
+ (id)specializedMetadataProviderForResourceWithContext:(id)a0;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;
+ (unsigned long long)specialization;

- (void)cancel;
- (void).cxx_destruct;
- (void)fetchMetadataFromURL:(id)a0;
- (void)fetchMetadataForReachableFile:(id)a0;
- (void)generateFallbackMetadataForUnreachableFile:(id)a0;
- (void)fetchIconAndThumbnailFromQuickLookForURL:(id)a0;
- (void)updatePreliminaryMetadata;
- (void)cleanUpTemporaryFile;
- (void)complete;
- (void)metadataProviderSpecializationDidFail:(id)a0;
- (void)metadataProviderSpecialization:(id)a0 didCompleteWithMetadata:(id)a1;
- (void)start;

@end
