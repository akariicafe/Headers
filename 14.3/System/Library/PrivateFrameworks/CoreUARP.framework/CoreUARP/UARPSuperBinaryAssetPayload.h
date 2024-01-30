@class NSString, NSDictionary, NSURL, NSData, NSNumber, NSMutableArray;

@interface UARPSuperBinaryAssetPayload : NSObject {
    NSString *_tag;
    NSNumber *_majorVersion;
    NSNumber *_minorVersion;
    NSNumber *_releaseVersion;
    NSNumber *_buildVersion;
    struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } _uarpVersion;
    NSMutableArray *_tlvs;
    NSURL *_url;
    NSString *_fileName;
    NSString *_friendlyName;
    NSData *_payload;
    NSDictionary *_dict;
    struct UARPPayloadHeader { unsigned int payloadHeaderLength; unsigned int payloadTag; struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } payloadVersion; unsigned int payloadMetadataOffset; unsigned int payloadMetadataLength; unsigned int payloadOffset; unsigned int payloadLength; } _payloadHeader;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)preparePackedTag;
- (BOOL)prepareUarpVersion:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)prepareMetaData;
- (BOOL)appendPayloadToFile:(id)a0 bytesWritten:(unsigned long long *)a1 error:(id *)a2;
- (void)addMetaDataTLV:(id)a0;
- (BOOL)expandDictionaryWithPayloadsFolder:(id)a0 metaDataTable:(id)a1 error:(id *)a2;
- (id)initWithPayloadHeader:(struct UARPPayloadHeader { unsigned int x0; unsigned int x1; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (void)addMetaDataTLVs:(id)a0;
- (BOOL)expandPayloadToURL:(id)a0 superbinary:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 error:(id *)a4;
- (id)initWithTag:(id)a0 majorVersion:(id)a1 minorVersion:(id)a2 releaseVersion:(id)a3 buildVersion:(id)a4;
- (BOOL)setPayloadToData:(id)a0;
- (BOOL)parseFromPlistVersion:(id *)a0;
- (BOOL)parseFromPlistPayloadMetaDataTLVs:(id)a0 payloadsURL:(id)a1 error:(id *)a2;
- (BOOL)setPayloadToContentsOfFile:(id)a0 friendlyName:(id)a1 error:(id *)a2;
- (id)preparePayload;

@end
