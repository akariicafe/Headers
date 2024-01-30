@class NSData, NSString, NSURL, NSArray, NSDictionary, UARPAssetTag, NSObject, NSMutableArray, NSMutableData;
@protocol OS_os_log;

@interface UARPSuperBinaryAssetPayload : NSObject {
    NSObject<OS_os_log> *_log;
    NSString *_tag;
    UARPAssetTag *_payloadTag;
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _releaseVersion;
    unsigned long long _buildVersion;
    NSMutableArray *_tlvs;
    NSURL *_url;
    NSURL *_superBinaryURL;
    NSString *_friendlyName;
    NSDictionary *_dict;
    unsigned int _blockSize;
    int _compression;
    struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } _uarpVersion;
    struct UARPPayloadHeader { unsigned int payloadHeaderLength; unsigned int payloadTag; struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } payloadVersion; unsigned int payloadMetadataOffset; unsigned int payloadMetadataLength; unsigned int payloadOffset; unsigned int payloadLength; } _payloadHeader;
    NSMutableData *_compressionHeaders;
    unsigned int _compressionHeaderIndex;
}

@property (readonly) NSArray *tlvs;
@property (readonly, copy) NSData *payload;
@property (readonly) UARPAssetTag *payloadTag;
@property (readonly) BOOL needsCompression;
@property (readonly, copy) NSData *compressionHeaders;
@property (readonly) unsigned long long compressionHeaderIndex;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)preparePackedTag;
- (BOOL)prepareUarpVersion:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)prepareMetaData;
- (BOOL)appendPayloadToFile:(id)a0 bytesWritten:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)setPayloadToData:(id)a0;
- (void)addMetaDataTLV:(id)a0;
- (BOOL)expandDictionaryWithPayloadsFolder:(id)a0 metaDataTable:(id)a1 error:(id *)a2;
- (id)initWithTag:(id)a0 majorVersion:(id)a1 minorVersion:(id)a2 releaseVersion:(id)a3 buildVersion:(id)a4;
- (id)initWithPayloadHeader:(struct UARPPayloadHeader { unsigned int x0; unsigned int x1; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (void)setSuperBinaryURL:(id)a0;
- (void)addMetaDataTLVs:(id)a0;
- (BOOL)expandPayloadToURL:(id)a0 payloadFilename:(id)a1 superbinary:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 error:(id *)a5;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangePayload;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeMetadata;
- (id)initWithPayloadTag:(id)a0 majorVersion:(unsigned long long)a1 minorVersion:(unsigned long long)a2 releaseVersion:(unsigned long long)a3 buildVersion:(unsigned long long)a4;
- (BOOL)setPayloadToContentsOfURL:(id)a0 friendlyName:(id)a1;
- (BOOL)parseFromPlistVersion:(id *)a0;
- (BOOL)parseFromPlistPayloadMetaDataTLVs:(id)a0 payloadsURL:(id)a1 error:(id *)a2;
- (BOOL)setPayloadToContentsOfFile:(id)a0 friendlyName:(id)a1 error:(id *)a2;
- (BOOL)expandPayloadToURL:(id)a0 superbinary:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 error:(id *)a4;

@end
