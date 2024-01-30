@class NSString, NSMutableDictionary, NSDate, NSNumber;

@interface PHImportDuplicateInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSDate *imageDate;
@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) NSString *fingerprint;
@property (readonly, nonatomic) NSString *avchdFingerprint;
@property (readonly, nonatomic) double timezoneOffset;
@property (readonly, nonatomic) BOOL hasVideoComplement;

- (BOOL)isLegacy;
- (id)objectID;
- (id)description;
- (id)initWithAssetInfo:(id)a0;
- (id)originatingAssetIdentifier;
- (void).cxx_destruct;

@end
