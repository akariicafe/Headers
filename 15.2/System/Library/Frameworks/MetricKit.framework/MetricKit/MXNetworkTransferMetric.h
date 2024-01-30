@class NSMeasurement;

@interface MXNetworkTransferMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeWifiUpload;
@property (readonly) NSMeasurement *cumulativeWifiDownload;
@property (readonly) NSMeasurement *cumulativeCellularUpload;
@property (readonly) NSMeasurement *cumulativeCellularDownload;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCumulativeWifiUploadMeasurement:(id)a0 cumulativeWifiDownloadMeasurement:(id)a1 cumulativeCellularUploadMeasurement:(id)a2 cumulativeCellularDownloadMeasurement:(id)a3;

@end
