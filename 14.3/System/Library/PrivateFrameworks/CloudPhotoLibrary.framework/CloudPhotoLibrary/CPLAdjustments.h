@class NSString, NSData, CPLResource;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *creatorCode;
@property (copy, nonatomic) NSString *adjustmentType;
@property (copy, nonatomic) NSString *adjustmentCompoundVersion;
@property (copy, nonatomic) NSString *adjustmentCreatorCode;
@property (nonatomic) unsigned long long adjustmentSourceType;
@property (retain, nonatomic) NSData *simpleAdjustmentData;
@property (copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint;
@property (copy, nonatomic) NSString *otherAdjustmentsFingerprint;
@property (nonatomic) unsigned long long adjustmentRenderTypes;
@property (retain, nonatomic) CPLResource *adjustmentData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)adjustmentSimpleDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
