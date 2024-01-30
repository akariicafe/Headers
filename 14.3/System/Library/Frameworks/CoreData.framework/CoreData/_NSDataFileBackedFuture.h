@class NSURL, NSUUID, NSData;

@interface _NSDataFileBackedFuture : NSData <_NSFileBackedFuture, NSSecureCoding> {
    NSURL *_fileURL;
    NSURL *_originalFileURL;
    NSData *_realData;
    NSData *_bytes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSUUID *UUID;

+ (Class)classForKeyedUnarchiver;

- (const void *)bytes;
- (unsigned long long)length;
- (void)_copyToInterimLocation;
- (void *)_bytesPtrForStore;
- (void)dealloc;
- (void)_moveToPermanentLocation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_bytesLengthForStore;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;
- (Class)classForCoder;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (BOOL)_isCloudKitSupportOriginated;
- (void)encodeWithCoder:(id)a0;

@end
