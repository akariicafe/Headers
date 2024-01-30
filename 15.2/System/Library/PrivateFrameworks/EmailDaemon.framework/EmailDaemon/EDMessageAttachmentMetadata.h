@class NSString, NSNumber, NSURL;

@interface EDMessageAttachmentMetadata : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) long long globalMessageID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *mimePartNumber;
@property (retain, nonatomic) NSNumber *attachmentID;
@property (readonly, nonatomic) NSURL *remoteURL;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
