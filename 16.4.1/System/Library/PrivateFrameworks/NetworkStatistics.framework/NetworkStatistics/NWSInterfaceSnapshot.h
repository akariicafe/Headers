@class NSString;

@interface NWSInterfaceSnapshot : NWSSnapshot {
    NSString *_interfaceName;
    NSString *_interfaceDescription;
    struct nstat_ifnet_descriptor { unsigned long long threshold; unsigned int ifindex; struct nstat_ifnet_desc_link_status { unsigned int link_status_type; union { struct nstat_ifnet_desc_cellular_status { unsigned int valid_bitmask; unsigned int link_quality_metric; unsigned int ul_effective_bandwidth; unsigned int ul_max_bandwidth; unsigned int ul_min_latency; unsigned int ul_effective_latency; unsigned int ul_max_latency; unsigned int ul_retxt_level; unsigned int ul_bytes_lost; unsigned int ul_min_queue_size; unsigned int ul_avg_queue_size; unsigned int ul_max_queue_size; unsigned int dl_effective_bandwidth; unsigned int dl_max_bandwidth; unsigned int config_inactivity_time; unsigned int config_backoff_time; unsigned short mss_recommended; unsigned char reserved[2]; } cellular; struct nstat_ifnet_desc_wifi_status { unsigned int valid_bitmask; unsigned int link_quality_metric; unsigned int ul_effective_bandwidth; unsigned int ul_max_bandwidth; unsigned int ul_min_latency; unsigned int ul_effective_latency; unsigned int ul_max_latency; unsigned int ul_retxt_level; unsigned int ul_bytes_lost; unsigned int ul_error_rate; unsigned int dl_effective_bandwidth; unsigned int dl_max_bandwidth; unsigned int dl_min_latency; unsigned int dl_effective_latency; unsigned int dl_max_latency; unsigned int dl_error_rate; unsigned int config_frequency; unsigned int config_multicast_rate; unsigned int scan_count; unsigned int scan_duration; } wifi; } u; } link_status; unsigned int type; char description[128]; char name[17]; unsigned char reserved[3]; } _descriptor;
}

@property unsigned long long linkQualityMetric;
@property unsigned long long ulMaxBandwidth;
@property unsigned long long ulEffectiveBandwidth;
@property unsigned long long ulBytesLost;
@property unsigned long long ulMinLatency;
@property unsigned long long ulEffectiveLatency;
@property unsigned long long ulMaxLatency;
@property unsigned long long ulReTxtLevel;
@property unsigned long long dlMaxBandwidth;
@property unsigned long long dlEffectiveBandwidth;
@property unsigned long long cellUlMinQueueSize;
@property unsigned long long cellUlAvgQueueSize;
@property unsigned long long cellUlMaxQueueSize;
@property unsigned long long cellConfigInactivityTime;
@property unsigned long long cellConfigBackoffTime;
@property unsigned long long wifiUlErrorRate;
@property unsigned long long wifiDlMinLatency;
@property unsigned long long wifiDlEffectiveLatency;
@property unsigned long long wifiDlMaxLatency;
@property unsigned long long wifiDlErrorRate;
@property unsigned long long wifiConfigFrequency;
@property unsigned long long wifiConfigMulticastRate;
@property unsigned long long wifiScanCount;
@property unsigned long long wifiScanDuration;
@property (readonly) NSString *interfaceName;
@property (readonly) NSString *interfaceDescription;
@property (readonly) unsigned int interfaceType;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) unsigned long long threshold;

- (id)traditionalDictionary;
- (void)_handleWifiExtra:(struct nstat_ifnet_desc_wifi_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; } *)a0;
- (id)provider;
- (void)_handleCellExtra:(struct nstat_ifnet_desc_cellular_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned short x16; unsigned char x17[2]; } *)a0;
- (void)_invalidateCommonCounts;
- (void)_invalidateCellCounts;
- (void)_handleDescriptor:(struct nstat_ifnet_descriptor { unsigned long long x0; unsigned int x1; struct nstat_ifnet_desc_link_status { unsigned int x0; union { struct nstat_ifnet_desc_cellular_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned short x16; unsigned char x17[2]; } x0; struct nstat_ifnet_desc_wifi_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; } x1; } x1; } x2; unsigned int x3; char x4[128]; char x5[17]; unsigned char x6[3]; } *)a0;
- (id)description;
- (void)_invalidateWifiCounts;
- (id)initWithCounts:(const struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } *)a0 interfaceDescriptor:(struct nstat_ifnet_descriptor { unsigned long long x0; unsigned int x1; struct nstat_ifnet_desc_link_status { unsigned int x0; union { struct nstat_ifnet_desc_cellular_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned short x16; unsigned char x17[2]; } x0; struct nstat_ifnet_desc_wifi_status { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; } x1; } x1; } x2; unsigned int x3; char x4[128]; char x5[17]; unsigned char x6[3]; } *)a1 sourceIdent:(unsigned long long)a2 seqno:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)_invalidateAllExtraCounts;

@end
