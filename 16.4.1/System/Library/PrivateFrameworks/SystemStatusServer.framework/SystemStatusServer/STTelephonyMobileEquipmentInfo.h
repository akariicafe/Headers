@class NSString;

@interface STTelephonyMobileEquipmentInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *MEID;
@property (readonly, copy, nonatomic) NSString *IMEI;
@property (readonly, copy, nonatomic) NSString *ICCID;
@property (readonly, copy, nonatomic) NSString *CSN;
@property (readonly, copy, nonatomic) NSString *bootstrapICCID;
@property (readonly, nonatomic, getter=isOnBootstrap) BOOL onBootstrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
