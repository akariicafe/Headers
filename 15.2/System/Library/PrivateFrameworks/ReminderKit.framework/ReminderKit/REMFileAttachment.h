@class NSURL;

@interface REMFileAttachment : REMAttachment

@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL isTemporaryFileURL;

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)createTemporaryFileWithData:(id)a0 UTI:(id)a1;
+ (id)createTemporaryFileURLWithUTI:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 UTI:(id)a3 fileSize:(unsigned long long)a4 fileURL:(id)a5 data:(id)a6;

@end
