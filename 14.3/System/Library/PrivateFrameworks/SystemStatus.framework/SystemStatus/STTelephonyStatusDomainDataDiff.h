@class NSString, STTelephonyStatusDomainSIMInfoDiff, BSSettings;

@interface STTelephonyStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfoDiff *SIMOneInfoDiff;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfoDiff *SIMTwoInfoDiff;
@property (readonly, copy, nonatomic) BSSettings *changes;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromData:(id)a0 toData:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)applyToMutableData:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dataByApplyingToData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSIMOneInfoDiff:(id)a0 SIMTwoInfoDiff:(id)a1 changes:(id)a2;

@end
