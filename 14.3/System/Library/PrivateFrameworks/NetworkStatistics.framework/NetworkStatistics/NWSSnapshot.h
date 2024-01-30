@class NSString, NSDictionary;

@interface NWSSnapshot : NSObject {
    struct nstat_counts { unsigned long long nstat_rxpackets; unsigned long long nstat_rxbytes; unsigned long long nstat_txpackets; unsigned long long nstat_txbytes; unsigned long long nstat_cell_rxbytes; unsigned long long nstat_cell_txbytes; unsigned long long nstat_wifi_rxbytes; unsigned long long nstat_wifi_txbytes; unsigned long long nstat_wired_rxbytes; unsigned long long nstat_wired_txbytes; unsigned int nstat_rxduplicatebytes; unsigned int nstat_rxoutoforderbytes; unsigned int nstat_txretransmit; unsigned int nstat_connectattempts; unsigned int nstat_connectsuccesses; unsigned int nstat_min_rtt; unsigned int nstat_avg_rtt; unsigned int nstat_var_rtt; } _counts;
}

@property (readonly) unsigned int _rxDuplicateBytes;
@property (readonly) unsigned int _rxOutOfOrderBytes;
@property (readonly) unsigned int _txRetransmittedBytes;
@property (readonly) unsigned int _connectAttempts;
@property (readonly) unsigned int _connectSuccesses;
@property (readonly) double _rttMinimum;
@property (readonly) double _rttAverage;
@property (readonly) double _rttVariation;
@property (readonly) unsigned long long rxPackets;
@property (readonly) unsigned long long rxBytes;
@property (readonly) unsigned long long txPackets;
@property (readonly) unsigned long long txBytes;
@property (readonly) unsigned long long rxCellularBytes;
@property (readonly) unsigned long long rxWiFiBytes;
@property (readonly) unsigned long long rxWiredBytes;
@property (readonly) unsigned long long txCellularBytes;
@property (readonly) unsigned long long txWiFiBytes;
@property (readonly) unsigned long long txWiredBytes;
@property (readonly) unsigned long long changeSeqno;
@property (readonly) unsigned long long sourceIdentifier;
@property (readonly) NSString *provider;
@property (readonly) NSDictionary *traditionalDictionary;

- (id)_initWithCounts:(const struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } *)a0 sourceIdent:(unsigned long long)a1 seqno:(unsigned long long)a2;
- (id)_createCountsForProvider:(int)a0;
- (void).cxx_destruct;
- (id)description;

@end
