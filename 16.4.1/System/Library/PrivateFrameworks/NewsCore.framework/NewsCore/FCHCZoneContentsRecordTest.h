@class NSString, NSArray, NSDictionary;

@interface FCHCZoneContentsRecordTest : NSObject

@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSArray *unencryptedFields;
@property (copy, nonatomic) NSArray *encryptedFields;
@property (copy, nonatomic) NSDictionary *expectedValues;

- (void).cxx_destruct;

@end
