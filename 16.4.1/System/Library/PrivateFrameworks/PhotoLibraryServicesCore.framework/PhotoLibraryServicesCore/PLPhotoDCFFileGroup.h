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

- (id)delegate;
- (id)extensions;
- (id)directory;
- (void)addExtension:(id)a0;
- (BOOL)hasThumbnail;
- (BOOL)isValid;
- (void)setDelegate:(id)a0;
- (void)setDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)date;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)pathForVideoPreviewFile;
- (id)pathForFullSizeImage;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)pathForMetadata;
- (void)addExtensionsFromMetadataDirectory;
- (void)createMetadataDirectoryIfNecessary;
- (void)deleteFiles;
- (void)deleteObsoleteFiles;
- (void)forceAddExtensionsFromMetadataDirectory;
- (BOOL)hasObsoleteFiles;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedThumbnail;
- (BOOL)hasPrebakedWildcatThumbnails;
- (BOOL)hasVideoFile;
- (id)imageSourceTypeHint;
- (id)initWithName:(id)a0 number:(int)a1 directory:(id)a2;
- (BOOL)isWritePending;
- (id)lowResolutionFilename;
- (id)pathForContainingDirectory;
- (id)pathForGroupWithoutExtension;
- (id)pathForLowResolutionFile;
- (id)pathForMetadataWithGroupName;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForThumbnailFile;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (void)setWriteIsPending:(BOOL)a0;
- (id)thumbnailFilename;
- (id)videoPreviewFilename;

@end
