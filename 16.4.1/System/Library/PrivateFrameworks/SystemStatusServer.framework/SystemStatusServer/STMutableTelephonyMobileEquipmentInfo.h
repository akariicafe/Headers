@class NSString;

@interface STMutableTelephonyMobileEquipmentInfo : STTelephonyMobileEquipmentInfo

@property (copy, nonatomic) NSString *MEID;
@property (copy, nonatomic) NSString *IMEI;
@property (copy, nonatomic) NSString *ICCID;
@property (copy, nonatomic) NSString *CSN;
@property (copy, nonatomic) NSString *bootstrapICCID;

- (void)setCSN:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setICCID:(id)a0;
- (void)setBootstrapICCID:(id)a0;
- (void)setIMEI:(id)a0;
- (void)setMEID:(id)a0;

@end
