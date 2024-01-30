@class NSString, NSURL, NSData, LPARAssetProperties;

@interface LPARAsset : NSObject <NSSecureCoding> {
    NSData *_data;
    NSURL *_temporaryFileURL;
    LPARAssetProperties *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, copy, nonatomic) LPARAssetProperties *properties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_createTemporaryFileAndWriteData;
- (unsigned long long)_encodedSize;
- (id)_ensureTemporaryAssetURL;
- (id)_initWithARAsset:(id)a0;
- (BOOL)_isSubstitute;
- (void)_mapDataFromFileURL;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)initWithData:(id)a0 MIMEType:(id)a1 properties:(id)a2;

@end
