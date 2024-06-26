@class MFAttachmentManager, NSString, NSItemProvider, NSURL, MFMimePart, MFAttachmentPlaceholder, EMMailDropMetadata;
@protocol MFDataConsumer;

@interface MFAttachment : NSObject {
    MFAttachmentManager *_attachmentManager;
}

@property (readonly) BOOL isContainedInRFC822;
@property (readonly) BOOL isContainedInCompose;
@property (copy) NSString *contentID;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) MFMimePart *part;
@property (copy, nonatomic) NSString *fileName;
@property (readonly) NSString *path;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *disposition;
@property (copy, nonatomic) NSString *remoteImageFileName;
@property (nonatomic) unsigned long long decodedFileSize;
@property (nonatomic) unsigned long long encodedFileSize;
@property (readonly) BOOL isDataAvailableLocally;
@property (readonly) BOOL shouldAutoDownload;
@property (readonly) NSString *inferredMimeType;
@property (readonly) NSString *fileUTType;
@property (readonly) BOOL isAutoArchive;
@property BOOL isPlaceholder;
@property (retain, nonatomic) MFAttachmentPlaceholder *placeholder;
@property (retain, nonatomic) NSItemProvider *attachmentDataProvider;
@property (retain, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property (copy, nonatomic) id /* block */ fetchCompletionBlock;
@property (retain, nonatomic) id<MFDataConsumer> customConsumer;
@property (nonatomic) BOOL wantsCompletionBlockOffMainThread;
@property (readonly, nonatomic) BOOL isImageFile;
@property (readonly, nonatomic) BOOL isVideoFile;
@property (readonly, nonatomic) BOOL isMediaFile;
@property (readonly, nonatomic) BOOL isRFC822;
@property (readonly, nonatomic) BOOL isCalendarFile;
@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSString *meetingStorePersistentID;
@property (retain, nonatomic) NSString *icsRepresentation;
@property (nonatomic) struct CGSize { double width; double height; } imageDimensions;

+ (BOOL)isSinglePagePDF:(id)a0;

- (void)setMimeType:(id)a0;
- (id)path;
- (void)setIsPlaceholder:(BOOL)a0;
- (BOOL)isCached;
- (id)mailDropMetadata;
- (id)fetchPlaceholderData;
- (id)fetchDataSynchronously:(id *)a0 stripPrivateMetadata:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (BOOL)isMailDrop;
- (id)fetchLocalData:(id *)a0 stripPrivateMetadata:(BOOL)a1;
- (id)readFromDisk;
- (id)filterData:(id)a0;
- (id)fetchDataSynchronously:(id *)a0;
- (id)fetchLocalData;
- (BOOL)contentTypeConformsToEventVCS;
- (id)filterVCSData:(id)a0;
- (id)fileNameByStrippingZipIfNeeded:(BOOL)a0;
- (id)_fileUTTypeForFileName:(id)a0;
- (BOOL)isPDFFile;
- (BOOL)_isSinglePagePDFFileFetchLocalData:(BOOL)a0;
- (id)textEncodingGuessWithData:(id)a0;
- (BOOL)contentTypeConformsToEventICS;
- (id)initWithURL:(id)a0 attachmentManager:(id)a1;
- (id)decodeFilterWithDataConsumer:(id)a0;
- (id)fetchDataToURL:(id *)a0;
- (id)fileWrapperUsingFetchedLocalData;
- (BOOL)isMailDropPhotoArchive;
- (void)setMailDropMetadata:(id)a0;
- (id)newDownloadProgress;
- (id)filterICSData:(id)a0;
- (BOOL)hasCalendarMetadata;
- (id)attachmentContentTypeForFileName:(id)a0;
- (BOOL)isSinglePagePDFFile;
- (void)writeToDiskWithData:(id)a0;
- (id)textEncodingNameForData:(id)a0 mimeType:(id)a1;
- (BOOL)contentTypeConformsToVCard;
- (BOOL)contentTypeConformsToEvent;
- (BOOL)contentTypeConformsToProvisionment;
- (BOOL)contentTypeConformsToMarkup;
- (BOOL)contentTypeConformsToPassbook;
- (BOOL)contentTypeConformsToIWork;
- (id)fileName;
- (void)setFileName:(id)a0;
- (BOOL)isPlaceholder;
- (id)mimeType;
- (unsigned long long)sizeOnDisk;
- (unsigned long long)hash;
- (id)fileURL;
- (id)description;
- (id)fileAttributes;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToType:(id)a0;
- (id)fetchData;
- (id)_dataProvider;
- (id)metadataValueForKey:(id)a0;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;

@end
