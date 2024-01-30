@class NSMutableDictionary;

@interface GEORequestCounterStatistics : NSObject <NSSecureCoding> {
    NSMutableDictionary *_resultCounts;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long bytesTransmitted;
@property (readonly, nonatomic) unsigned long long bytesReceived;
@property (readonly, nonatomic) int durationCount;
@property (readonly, nonatomic) long long durationUSecondsTotal;
@property (readonly, nonatomic) unsigned long long usedInterfaces;

- (unsigned long long)countForResult:(unsigned char)a0;
- (void)encodeWithCoder:(id)a0;
- (void)incrementBytesTransmitted:(unsigned long long)a0;
- (void)incrementDuration:(double)a0;
- (void)incrementBytesReceived:(unsigned long long)a0;
- (void)incrementCountForResult:(unsigned char)a0;
- (void)addUsedInterfaces:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
