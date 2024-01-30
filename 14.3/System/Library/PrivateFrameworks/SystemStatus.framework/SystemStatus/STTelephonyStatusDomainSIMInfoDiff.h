@class NSString, BSSettings;

@interface STTelephonyStatusDomainSIMInfoDiff : NSObject <STStatusDomainDataDiff, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BSSettings *changes;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromInfo:(id)a0 toInfo:(id)a1;

- (id)init;
- (id)initWithChanges:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyToMutableInfo:(id)a0;
- (id)infoByApplyingToInfo:(id)a0;

@end
