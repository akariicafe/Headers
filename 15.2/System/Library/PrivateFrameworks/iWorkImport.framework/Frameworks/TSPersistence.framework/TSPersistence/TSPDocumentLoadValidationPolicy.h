@interface TSPDocumentLoadValidationPolicy : NSObject

@property (readonly, nonatomic) long long timing;
@property (readonly, nonatomic) BOOL validateModel;
@property (readonly, nonatomic) BOOL validateDataCRC;
@property (readonly, nonatomic) BOOL validateDataDigest;
@property (readonly, nonatomic) BOOL scanForOSLikeCorruption;

+ (id)loadValidationPolicyWithTiming:(long long)a0 validateModel:(BOOL)a1 validateDataCRC:(BOOL)a2 validateDataDigest:(BOOL)a3 scanForOSLikeCorruption:(BOOL)a4;

- (id)description;
- (id)initWithTiming:(long long)a0 validateModel:(BOOL)a1 validateDataCRC:(BOOL)a2 validateDataDigest:(BOOL)a3 scanForOSLikeCorruption:(BOOL)a4;

@end
