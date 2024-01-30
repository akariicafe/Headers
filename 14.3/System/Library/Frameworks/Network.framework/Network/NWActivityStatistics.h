@class NSUUID, NWL2Report, NSString, PBCodable, NWDeviceReport;

@interface NWActivityStatistics : NSObject

@property (nonatomic) struct nw_activity_report_s { unsigned long long investigation_identifier; unsigned int domain; unsigned int label; unsigned char activity_uuid[16]; unsigned char parent_activity_uuid[16]; char bundle_id[256]; unsigned char retry : 1; unsigned char __pad_bits : 7; unsigned char __pad[7]; } report;
@property (retain, nonatomic) PBCodable *awdReport;
@property (nonatomic) unsigned int awdMetricID;
@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSUUID *parentUUID;
@property (readonly, nonatomic) unsigned int domain;
@property (readonly, nonatomic) unsigned int label;
@property (readonly, nonatomic) BOOL retry;
@property (readonly, nonatomic) unsigned long long investigation_identifier;
@property (retain, nonatomic) NSUUID *externallyVisibleActivityUUID;
@property (retain, nonatomic) NSUUID *externallyVisibleParentUUID;
@property (retain, nonatomic) NWL2Report *layer2Report;
@property (retain, nonatomic) NWDeviceReport *deviceReport;
@property (retain, nonatomic) NSString *bundleID;

+ (id)createActivityReport:(struct nw_activity_report_s { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned char x3[16]; unsigned char x4[16]; char x5[256]; unsigned char x6 : 1; unsigned char x7 : 7; unsigned char x8[7]; })a0 uuidString:(id)a1 parentUUIDString:(id)a2;

- (void).cxx_destruct;
- (id)initWithNWActivityReport:(struct nw_activity_report_s { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned char x3[16]; unsigned char x4[16]; char x5[256]; unsigned char x6 : 1; unsigned char x7 : 7; unsigned char x8[7]; } *)a0 length:(unsigned long long)a1;
- (id)initWithPBCodableData:(id)a0;

@end
