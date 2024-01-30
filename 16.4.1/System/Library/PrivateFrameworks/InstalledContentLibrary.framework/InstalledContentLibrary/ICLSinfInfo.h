@class NSNumber, NSDictionary;

@interface ICLSinfInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *applicationDSID;
@property (copy, nonatomic) NSNumber *familyID;
@property (copy, nonatomic) NSNumber *downloaderDSID;
@property (nonatomic) BOOL hasMIDBasedSINF;
@property (nonatomic) BOOL isMissingRequiredSINF;
@property (readonly, copy, nonatomic) NSDictionary *legacySinfInfoDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithLegacySinfInfoDictionary:(id)a0;

@end
