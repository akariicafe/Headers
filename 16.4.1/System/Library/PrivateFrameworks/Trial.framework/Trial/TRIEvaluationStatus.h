@class NSString, TRIFactorsState, NSDate;

@interface TRIEvaluationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *evaluationId;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) TRIFactorsState *evalState;

+ (id)defaultProvider;
+ (id)freshProvider;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0 evaluationId:(id)a1 date:(id)a2 evalState:(id)a3;

@end
