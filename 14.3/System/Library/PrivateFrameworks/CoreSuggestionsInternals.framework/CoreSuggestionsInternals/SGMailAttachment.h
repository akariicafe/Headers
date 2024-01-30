@class NSString;

@interface SGMailAttachment : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL isDownloadedLocally;
@property (readonly, nonatomic) BOOL isCalendarMimeType;

+ (id)attachmentWithType:(id)a0 filename:(id)a1 path:(id)a2;
+ (id)attachmentsFromSearchableItem:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(id)a0 filename:(id)a1 path:(id)a2;
- (BOOL)isCalendarMimeType;

@end
