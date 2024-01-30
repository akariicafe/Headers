@class NWStatisticsManager;
@protocol NWStatisticsSourceDelegate;

@interface NWStatisticsSource : NSObject {
    unsigned int _filter;
    struct nstat_counts { unsigned long long nstat_rxpackets; unsigned long long nstat_rxbytes; unsigned long long nstat_txpackets; unsigned long long nstat_txbytes; unsigned long long nstat_cell_rxbytes; unsigned long long nstat_cell_txbytes; unsigned long long nstat_wifi_rxbytes; unsigned long long nstat_wifi_txbytes; unsigned long long nstat_wired_rxbytes; unsigned long long nstat_wired_txbytes; unsigned int nstat_rxduplicatebytes; unsigned int nstat_rxoutoforderbytes; unsigned int nstat_txretransmit; unsigned int nstat_connectattempts; unsigned int nstat_connectsuccesses; unsigned int nstat_min_rtt; unsigned int nstat_avg_rtt; unsigned int nstat_var_rtt; } _last_counts;
}

@property (retain) id<NWStatisticsSourceDelegate> delegate;
@property (readonly) NWStatisticsManager *manager;
@property unsigned long long reference;
@property BOOL removing;
@property unsigned long long countsSeqno;
@property unsigned long long descriptorSeqno;
@property (readonly) unsigned int provider;
@property (readonly) const struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } *_nstat_counts;
@property (readonly) unsigned long long sourceIdentifier;
@property (readonly) unsigned long long snapshotRevision;

+ (id)createSourceForProvider:(unsigned int)a0 srcRef:(unsigned long long)a1 manager:(id)a2;

- (BOOL)handleMessage:(struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0 length:(long long)a1;
- (id)currentSnapshot;
- (void)queryUpdate;
- (BOOL)_handleDescriptor:(void *)a0 length:(unsigned long long)a1 events:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (int)handleDescriptor:(void *)a0 length:(unsigned long long)a1 events:(unsigned long long)a2;
- (void)queryCounts;
- (id)_currentSnapshot;
- (void)queryDescription;
- (id)initWithManager:(id)a0 source:(unsigned long long)a1 provider:(unsigned int)a2;
- (BOOL)handleCounts:(const struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } *)a0;

@end
