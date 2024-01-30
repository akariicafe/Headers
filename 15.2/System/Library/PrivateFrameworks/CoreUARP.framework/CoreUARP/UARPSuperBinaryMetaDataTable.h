@class NSArray, NSDictionary, NSURL, NSNumber, NSMutableArray;

@interface UARPSuperBinaryMetaDataTable : NSObject {
    NSURL *_plist;
    NSMutableArray *_values;
}

@property (readonly) NSNumber *formatVersion;
@property (readonly) NSArray *values;
@property (readonly) NSDictionary *dict;

+ (unsigned int)compressionAlgorithmFromString:(id)a0;

- (id)initWithPlist:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0;
- (void)addAppleSpecificTLVs;
- (void)addHostSpecificTLVs;
- (void)addDeviceSpecificTLVs2;
- (void)addHeySiriModelTLVs2;
- (void)addPersonalizationTLVs2;
- (void)addHostSpecificTLVs2;
- (void)addVoiceAssistTLVs2;
- (void)addLogsTLVs2;
- (void)addAnalyticsTLVs2;
- (id)tlvArrayWithKey:(id)a0 keyValue:(id)a1 payloadsURL:(id)a2 error:(id *)a3;
- (id)createTLVWithType:(unsigned long long)a0 keyValue:(id)a1 payloadsURL:(id)a2 isFilepath:(BOOL)a3;
- (id)initAppleSpecificWithFormatVersion:(id)a0;
- (id)initVendorAgnosticWithFormatVersion:(id)a0;
- (BOOL)expandPlist:(id *)a0;
- (id)tlvWithKey:(id)a0 keyValue:(id)a1 payloadsURL:(id)a2 error:(id *)a3;

@end
