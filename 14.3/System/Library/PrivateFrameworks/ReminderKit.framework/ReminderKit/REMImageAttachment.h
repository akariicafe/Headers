@interface REMImageAttachment : REMFileAttachment

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;

- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 UTI:(id)a3 fileSize:(unsigned long long)a4 fileURL:(id)a5 data:(id)a6 width:(unsigned long long)a7 height:(unsigned long long)a8;
- (BOOL)isEqual:(id)a0;
- (id)_deepCopy;
- (void)encodeWithCoder:(id)a0;

@end
