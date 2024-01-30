@class NSDictionary, NSURL, NSNumber, NSMutableArray;

@interface UARPSuperBinaryMetaDataTable : NSObject {
    NSURL *_plist;
    NSMutableArray *_values;
}

@property (readonly) NSNumber *formatVersion;
@property (readonly) NSDictionary *dict;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithPlist:(id)a0;
- (void)addAppleSpecificTLVs;
- (void)addHostSpecificTLVs;
- (void)addAppleSpecificTLVs2;
- (void)addHostSpecificTLVs2;
- (id)initAppleSpecificWithFormatVersion:(id)a0;
- (id)initVendorAgnosticWithFormatVersion:(id)a0;
- (BOOL)expandPlist:(id *)a0;
- (id)tlvWithKey:(id)a0 keyValue:(id)a1 payloadsURL:(id)a2 error:(id *)a3;

@end
