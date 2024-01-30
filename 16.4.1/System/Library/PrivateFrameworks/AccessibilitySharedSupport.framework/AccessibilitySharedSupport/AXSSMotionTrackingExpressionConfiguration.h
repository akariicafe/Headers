@class NSDictionary, NSMutableDictionary;

@interface AXSSMotionTrackingExpressionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *_facialExpressionToSensitivity;
@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;

+ (id)_defaultSensitivitiesForAllFacialExpressions;
+ (id)_facicalExpressionToSensitivityToValueMapping;
+ (BOOL)_jawOpenStartingWithValue:(float)a0 mouthClose:(float)a1 expressionConfiguration:(id)a2;
+ (float)_minConfidenceExpressionStarted:(unsigned long long)a0 usingExpressionConfiguration:(id)a1;
+ (id)defaultExpressionConfiguration;
+ (id)processIncomingExpressions:(id)a0 previousExpressions:(id)a1 expressionConfiguration:(id)a2 startExpressionsOutSet:(id *)a3 endExpressionsOutSet:(id *)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPlistDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)sensitivityForFacialExpression:(unsigned long long)a0;
- (void)_safelySetSensitivity:(unsigned long long)a0 forFacialExpression:(unsigned long long)a1 inDictionary:(id)a2;
- (BOOL)isEqualToMotionTrackingExpressionConfiguration:(id)a0;
- (void)setSensitivity:(unsigned long long)a0 forFacialExpression:(unsigned long long)a1;

@end
