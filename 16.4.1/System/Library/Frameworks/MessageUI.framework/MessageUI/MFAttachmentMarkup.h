@class NSData, NSString;

@interface MFAttachmentMarkup : NSObject

@property (retain, nonatomic) NSData *attachmentData;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *contextID;

+ (id)attachmentMarkupWithProperties:(id)a0 contentID:(id)a1 mimeType:(id)a2 filename:(id)a3 contextID:(id)a4;

- (void).cxx_destruct;

@end
