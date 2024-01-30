@class NSURL, NSString, NSArray;

@interface MobileCalDAVAttachmentUploadInfo : NSObject

@property (retain, nonatomic) NSURL *itemURL;
@property (retain, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) NSArray *calAttachmentsToUpload;

- (void).cxx_destruct;

@end
