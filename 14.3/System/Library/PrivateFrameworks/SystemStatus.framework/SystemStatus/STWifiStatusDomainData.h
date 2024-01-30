@class NSString;

@interface STWifiStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isWifiActive) BOOL wifiActive;
@property (readonly, nonatomic) unsigned long long signalStrengthBars;
@property (readonly, nonatomic, getter=isAssociatedToIOSHotspot) BOOL associatedToIOSHotspot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataByApplyingDiff:(id)a0;
- (id)init;
- (id)diffFromData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithData:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithWifiActive:(BOOL)a0 signalStrengthBars:(unsigned long long)a1 associatedToIOSHotspot:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
