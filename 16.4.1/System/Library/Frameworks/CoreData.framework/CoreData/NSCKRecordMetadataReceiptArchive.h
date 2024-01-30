@class NSMutableDictionary;

@interface NSCKRecordMetadataReceiptArchive : NSObject <NSSecureCoding> {
    NSMutableDictionary *_zoneIDToArchivedReceipts;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)enumerateArchivedRecordIDsUsingBlock:(id /* block */)a0;
- (id)initWithReceiptsToEncode:(id)a0;

@end
