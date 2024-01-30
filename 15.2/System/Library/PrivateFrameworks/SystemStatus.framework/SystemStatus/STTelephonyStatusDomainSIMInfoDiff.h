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
+ (void)_resolveCombinedChanges:(id)a0 forObjectEntry:(unsigned long long)a1 baseChanges:(id)a2;

- (id)diffByApplyingDiff:(id)a0;
- (id)initWithChanges:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)infoByApplyingToInfo:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToMutableInfo:(id)a0;

@end
