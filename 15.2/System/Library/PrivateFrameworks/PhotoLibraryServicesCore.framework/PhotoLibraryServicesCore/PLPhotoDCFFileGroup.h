@class NSString, PLPhotoDCFDirectory, NSMutableSet, NSDate;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject {
    id _delegate;
    PLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSString *_prebakedThumbnailPath;
    NSString *_videoFileExtension;
    NSMutableSet *_extensions;
    NSDate *_date;
    NSString *_preferredExtension;
    unsigned long long _hash;
    unsigned char _hashComputed : 1;
    unsigned char _addedExtensions : 1;
    unsigned char _writeIsPending : 1;
}

+ (id)allMetadataFileExtensions;

- (long long)compare:(id)a0;
- (id)directory;
- (id)pathForVideoPreviewFile;
- (void)addExtension:(id)a0;
- (id)pathForVideoFile;
- (id)description;
- (BOOL)hasThumbnail;
- (void)setDelegate:(id)a0;
- (id)date;
- (id)extensions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForTrimmedVideoFile;
- (id)delegate;
- (unsigned long long)hash;
- (id)pathForFullSizeImage;
- (void)setDate:(id)a0;
- (BOOL)isValid;
- (void)deleteFiles;
- (void)setWriteIsPending:(BOOL)a0;
- (id)initWithName:(id)a0 number:(int)a1 directory:(id)a2;
- (id)imageSourceTypeHint;
- (void)deleteObsoleteFiles;
- (BOOL)hasObsoleteFiles;
- (void)addExtensionsFromMetadataDirectory;
- (void)forceAddExtensionsFromMetadataDirectory;
- (id)pathForContainingDirectory;
- (id)pathForGroupWithoutExtension;
- (id)pathForMetadata;
- (id)pathForMetadataWithGroupName;
- (void)createMetadataDirectoryIfNecessary;
- (id)thumbnailFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (id)lowResolutionFilename;
- (id)videoPreviewFilename;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForLowResolutionFile;
- (BOOL)hasVideoFile;
- (BOOL)hasPrebakedThumbnail;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedWildcatThumbnails;
- (BOOL)isWritePending;

@end
