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

- (void)encodeWithCoder:(id)a0;
- (const void *)bytes;
- (void)_moveToPermanentLocation;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (unsigned long long)length;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (BOOL)_isCloudKitSupportOriginated;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_bytesLengthForStore;
- (unsigned long long)hash;
- (void *)_bytesPtrForStore;
- (void)_copyToInterimLocation;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;
- (id)description;

@end
