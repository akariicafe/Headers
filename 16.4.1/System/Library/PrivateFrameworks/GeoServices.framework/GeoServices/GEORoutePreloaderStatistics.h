@class NSDateInterval;

@interface GEORoutePreloaderStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) long long transportType;
@property (nonatomic) unsigned long long tilesPreloaded;
@property (nonatomic) unsigned long long tilesUsed;
@property (nonatomic) unsigned long long tilesMissed;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 transportType:(long long)a1 tilesPreloaded:(unsigned long long)a2 tilesUsed:(unsigned long long)a3 tilesMissed:(unsigned long long)a4;

@end
