@class NSArray, NSDictionary, NSURL, NSNumber, NSMutableArray;

@interface UARPSuperBinaryMetaDataTable : NSObject {
    NSURL *_plist;
    NSMutableArray *_values;
}

@property (readonly) NSNumber *formatVersion;
@property (readonly) NSArray *values;
@property (readonly) NSDictionary *dict;

+ (unsigned int)compressionAlgorithmFromString:(id)a0;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)initWithPlist:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)addComposeTLVs2;
- (void)addAnalyticsTLVs2;
- (void)addAppleSpecificTLVs;
- (void)addDeviceSpecificTLVs2;
- (void)addHeySiriModelTLVs2;
- (void)addHostSpecificTLVs;
- (void)addHostSpecificTLVs2;
- (void)addLogsTLVs2;
- (void)addPersonalizationTLVs2;
- (void)addTLV:(unsigned long long)a0 keyValue16:(id)a1 tlvArray:(id)a2;
- (void)addTLV:(unsigned long long)a0 keyValue32:(id)a1 tlvArray:(id)a2;
- (void)addTLV:(unsigned long long)a0 keyValue64:(id)a1 tlvArray:(id)a2;
- (void)addTLV:(unsigned long long)a0 keyValue8:(id)a1 tlvArray:(id)a2;
- (void)addTLV:(unsigned long long)a0 keyValue:(id)a1 tlvArray:(id)a2 payloadsURL:(id)a3 isFilepath:(BOOL)a4;
- (void)addTLV:(unsigned long long)a0 legacyTLV:(unsigned long long)a1 keyValue:(id)a2 tlvArray:(id)a3 payloadsURL:(id)a4 isFilepath:(BOOL)a5;
- (void)addTLV:(unsigned long long)a0 versionString:(id)a1 tlvArray:(id)a2;
- (void)addTLVCompressPayloadAlgorithm:(id)a0 tlvArray:(id)a1;
- (void)addVoiceAssistTLVs2;
- (void)composeMatchingPayloads:(id)a0 tlvArray:(id)a1;
- (void)composeMeasuredPayloads:(id)a0 tlvType:(unsigned long long)a1 tlvArray:(id)a2;
- (id)createTLVWithType:(unsigned long long)a0 keyValue:(id)a1 payloadsURL:(id)a2 isFilepath:(BOOL)a3;
- (BOOL)expandPlist:(id *)a0;
- (id)initAppleSpecificWithFormatVersion:(id)a0;
- (id)initVendorAgnosticWithFormatVersion:(id)a0;
- (id)tlvArrayWithKey:(id)a0 keyValue:(id)a1 payloadsURL:(id)a2 error:(id *)a3;
- (id)tlvWithKey:(id)a0 keyValue:(id)a1 payloadsURL:(id)a2 error:(id *)a3;

@end
