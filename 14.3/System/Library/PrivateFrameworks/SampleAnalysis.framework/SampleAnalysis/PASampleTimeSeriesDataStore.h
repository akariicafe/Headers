@class SASampleStore;

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) SASampleStore *sampleStore;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSampleStore:(id)a0;

@end
