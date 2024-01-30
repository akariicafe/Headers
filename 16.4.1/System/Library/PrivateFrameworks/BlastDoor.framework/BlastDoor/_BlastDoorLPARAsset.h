@class NSString, NSData, NSURL, _BlastDoorLPARAssetProperties;

@interface _BlastDoorLPARAsset : NSObject <NSSecureCoding> {
    NSURL *_temporaryFileURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *MIMEType;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) _BlastDoorLPARAssetProperties *properties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_encodedSize;
- (id)_initWithARAsset:(id)a0;
- (BOOL)_shouldEncodeData;

@end
