@class NSString, BSSettings;

@interface STTelephonyStatusDomainSIMInfoDiff : NSObject <STStatusDomainDataDiff, NSCopying> {
    BSSettings *_changes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromInfo:(id)a0 toInfo:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyToMutableInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)diffByApplyingDiff:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)infoByApplyingToInfo:(id)a0;
- (void).cxx_destruct;

@end
