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

- (void).cxx_destruct;
- (void)addExtension:(id)a0;
- (id)date;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isValid;
- (id)pathForTrimmedVideoFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)description;
- (void)setWriteIsPending:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)pathForVideoPreviewFile;
- (id)pathForFullSizeImage;
- (id)pathForVideoFile;
- (id)initWithName:(id)a0 number:(int)a1 directory:(id)a2;
- (id)imageSourceTypeHint;
- (BOOL)hasObsoleteFiles;
- (void)deleteObsoleteFiles;
- (void)addExtensionsFromMetadataDirectory;
- (void)forceAddExtensionsFromMetadataDirectory;
- (id)pathForContainingDirectory;
- (id)pathForGroupWithoutExtension;
- (id)pathForMetadata;
- (id)pathForMetadataWithGroupName;
- (id)extensions;
- (void)createMetadataDirectoryIfNecessary;
- (id)thumbnailFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)lowResolutionFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (id)videoPreviewFilename;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForLowResolutionFile;
- (BOOL)hasVideoFile;
- (BOOL)hasPrebakedThumbnail;
- (void)setDelegate:(id)a0;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedWildcatThumbnails;
- (void)deleteFiles;
- (BOOL)isWritePending;
- (void)setDate:(id)a0;
- (BOOL)hasThumbnail;
- (id)directory;
- (id)delegate;

@end
