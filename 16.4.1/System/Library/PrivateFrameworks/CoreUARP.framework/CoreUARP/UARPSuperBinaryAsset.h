@class UARPSuperBinaryMetaDataTable, NSArray, NSDictionary, NSURL, UARPAssetVersion, NSMutableArray, NSMutableData;

@interface UARPSuperBinaryAsset : NSObject {
    unsigned long long _formatVersion;
    NSMutableArray *_tlvs;
    NSMutableArray *_payloads;
    NSURL *_plist;
    NSURL *_plistMetaData;
    NSURL *_url;
    UARPSuperBinaryMetaDataTable *_metaDataTable;
    NSDictionary *_plistDictionary;
    struct UARPSuperBinaryHeader { unsigned int superBinaryFormatVersion; unsigned int superBinaryHeaderLength; unsigned int superBinaryLength; struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } superBinaryVersion; unsigned int superBinaryMetadataOffset; unsigned int superBinaryMetadataLength; unsigned int payloadHeadersOffset; unsigned int payloadHeadersLength; } _superBinaryHeader;
    NSMutableData *_metaData;
}

@property (readonly) NSArray *tlvs;
@property (readonly) NSArray *payloads;
@property (readonly) UARPAssetVersion *assetVersion;

+ (BOOL)versionFromString:(id)a0 version:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;

- (id)initWithURL:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(out id *)a1;
- (void)addPayload:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)prepareMetaData;
- (void)addMetaDataTLV:(id)a0;
- (id)computeHash;
- (BOOL)decomposeToURL:(id)a0 error:(id *)a1;
- (BOOL)expandHeadersAndTLVs:(id *)a0;
- (BOOL)expandPlistWithPayloadsFolder:(id)a0 error:(id *)a1;
- (BOOL)exportSuperBinaryContentToFilepath:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (id)initWithFormatVersion:(unsigned long long)a0 assetVersion:(id)a1;
- (id)initWithFormatVersion:(id)a0 majorVersion:(id)a1 minorVersion:(id)a2 releaseVersion:(id)a3 buildVersion:(id)a4;
- (id)initWithPlist:(id)a0 metadataPlist:(id)a1;
- (BOOL)parseFromPlistFormatVersion:(id)a0 error:(id *)a1;
- (BOOL)parseFromPlistSuperBinaryMetaDataTLVs:(id)a0 payloadsURL:(id)a1 error:(id *)a2;
- (BOOL)parseFromPlistSuperBinaryMetaDataValuesTable:(id *)a0;
- (BOOL)parseFromPlistSuperBinaryPayloads:(id)a0 payloadsURL:(id)a1 error:(id *)a2;
- (BOOL)parseFromPlistSuperBinaryVersion:(id)a0 error:(id *)a1;
- (id)payloadData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeMetadata;
- (BOOL)writeToURL:(id)a0 payloadStartOffset:(unsigned long long)a1 error:(out id *)a2;

@end
