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

- (unsigned long long)length;
- (void)encodeWithCoder:(id)a0;
- (void)_copyToInterimLocation;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;
- (BOOL)_isCloudKitSupportOriginated;
- (id)description;
- (const void *)bytes;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_moveToPermanentLocation;
- (unsigned long long)_bytesLengthForStore;
- (void *)_bytesPtrForStore;

@end
