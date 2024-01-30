@class NSString;

@interface DeviceTypeDeviceIdentity : NSObject

@property (readonly, copy, nonatomic) NSString *product_type;
@property (readonly, copy, nonatomic) NSString *device_class;
@property (readonly, copy, nonatomic) NSString *hardware_model;
@property (readonly, copy, nonatomic) NSString *soc_generation;
@property (readonly, nonatomic) BOOL device_supports_dcrt_oob;
@property (readonly, nonatomic) BOOL is_prodfused_demoted;
@property (readonly, nonatomic) BOOL is_devfused_undemoted;
@property (readonly, nonatomic) BOOL is_dev_board;
@property (readonly, nonatomic) BOOL is_fpga;
@property (readonly, nonatomic) BOOL is_ipod;
@property (readonly, nonatomic) BOOL is_ipad;
@property (readonly, nonatomic) BOOL is_audio_accessory;
@property (readonly, nonatomic) BOOL has_telephony;
@property (readonly, nonatomic) BOOL should_hactivate;
@property (readonly, nonatomic) BOOL is_internal_build;
@property (readonly, nonatomic) BOOL has_internal_diagnostics;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)copyDeviceTreeString:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (id)copyDeviceTreeInt:(id)a0 key:(id)a1 defaultValue:(int)a2;
- (id)copyBootArgs;
- (id)copyDeviceTreeProperty:(id)a0 key:(id)a1;
- (id)copyBootSessionUUID;
- (BOOL)runningInRAMDisk;

@end
