@class NSString;

@interface SGMailAttachment : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL isDownloadedLocally;
@property (readonly, nonatomic) BOOL isCalendarMimeType;
@property (readonly, nonatomic) BOOL isMediaMimeType;
@property (readonly, nonatomic) BOOL isApplicationMimeType;
@property (readonly, nonatomic) BOOL isOthersMimeType;

+ (id)attachmentWithType:(id)a0 filename:(id)a1 path:(id)a2;
+ (id)attachmentsFromBiomeAttachments:(id)a0;
+ (id)attachmentsFromSearchableItem:(id)a0;
+ (id)testAttachmentWithType:(id)a0 size:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (void)setSize:(unsigned long long)a0;
- (id)initWithType:(id)a0 filename:(id)a1 path:(id)a2;
- (BOOL)isCalendarMimeType;
- (id)mimeCategory;

@end
