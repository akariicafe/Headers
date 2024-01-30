@interface DownlinkSegment : MultiwaySegment {
    double _videoDegradedMaxLength;
}

@property double videoDegradedStartTime;
@property BOOL isVideoDegraded;
@property unsigned int videoDegradedTotalCounter;
@property double videoDegradedTotalTime;
@property unsigned long long totalCellRxDataBytes;
@property unsigned long long totalCellDupRxDataBytes;

- (void)dealloc;
- (id)segmentReport;
- (void)processVideoDegraded:(BOOL)a0;
- (id)initWithSegmentName:(id)a0 previousSegmentName:(id)a1 delegate:(id)a2;
- (void)addCellByteCountStats:(id)a0;

@end
