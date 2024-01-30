@class NSDecimalNumber, NSString;

@interface PKAccountAssistanceProgramMessage : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDecimalNumber *pastDue;
@property (retain, nonatomic) NSDecimalNumber *chargeOffPreventionAmount;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordNamePrefix;
+ (id)recordType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
