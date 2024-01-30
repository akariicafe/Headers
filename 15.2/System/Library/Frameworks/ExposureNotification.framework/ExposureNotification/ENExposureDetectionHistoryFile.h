@class NSString, NSDictionary, NSData, NSDate, NSNumber, ENRegion;

@interface ENExposureDetectionHistoryFile : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *fileHash;
@property (copy, nonatomic) NSDate *processDate;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSNumber *keyCount;
@property (copy, nonatomic) NSNumber *matchCount;
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier;
@property (copy, nonatomic) ENRegion *sourceRegion;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;

@end
