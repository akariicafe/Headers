@class NFTrustKey, NSString, NSData, NSNumber;

@interface NFTrustSignResponse : NFTrustObject

@property (retain, nonatomic) NSData *trustObjectInternalRawNSData;
@property (retain, nonatomic) NSNumber *counterValue;
@property (readonly, nonatomic) NSString *rawData;
@property (retain, nonatomic) NFTrustKey *key;

+ (BOOL)supportsSecureCoding;
+ (id)signResponseWithRawData:(id)a0 counterValueData:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
