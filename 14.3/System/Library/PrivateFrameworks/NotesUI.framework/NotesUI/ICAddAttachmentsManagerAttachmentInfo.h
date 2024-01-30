@class NSAttributedString, NSString, NSDictionary, NSURL, NSData, UIImage, ICAttachment;

@interface ICAddAttachmentsManagerAttachmentInfo : NSObject

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) NSString *mediaUTI;
@property (retain, nonatomic) NSData *mediaData;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSString *mediaFilenameExtension;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSAttributedString *attributedContentText;
@property (readonly, nonatomic) BOOL isPhoto;
@property (readonly, nonatomic) BOOL isVideo;
@property (nonatomic) BOOL usesTemporaryFile;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id)description;
- (id)attachmentIfExistsForAccount:(id)a0;
- (unsigned long long)mediaSize;
- (void)deleteTemporaryImageFileIfNecessary;

@end
