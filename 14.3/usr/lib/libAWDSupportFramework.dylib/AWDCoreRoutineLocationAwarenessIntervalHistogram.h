@class NSMutableArray;

@interface AWDCoreRoutineLocationAwarenessIntervalHistogram : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (retain, nonatomic) NSMutableArray *lessThan10mIntervalHistograms;
@property (retain, nonatomic) NSMutableArray *lessThan25mIntervalHistograms;
@property (retain, nonatomic) NSMutableArray *lessThan55mIntervalHistograms;
@property (retain, nonatomic) NSMutableArray *lessThan200mIntervalHistograms;
@property (retain, nonatomic) NSMutableArray *anyPositiveIntervalHistograms;

+ (Class)lessThan10mIntervalHistogramType;
+ (Class)lessThan25mIntervalHistogramType;
+ (Class)lessThan55mIntervalHistogramType;
+ (Class)lessThan200mIntervalHistogramType;
+ (Class)anyPositiveIntervalHistogramType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addLessThan10mIntervalHistogram:(id)a0;
- (void)addLessThan25mIntervalHistogram:(id)a0;
- (void)addLessThan55mIntervalHistogram:(id)a0;
- (void)addLessThan200mIntervalHistogram:(id)a0;
- (void)addAnyPositiveIntervalHistogram:(id)a0;
- (unsigned long long)lessThan10mIntervalHistogramsCount;
- (void)clearLessThan10mIntervalHistograms;
- (id)lessThan10mIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)lessThan25mIntervalHistogramsCount;
- (void)clearLessThan25mIntervalHistograms;
- (id)lessThan25mIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)lessThan55mIntervalHistogramsCount;
- (void)clearLessThan55mIntervalHistograms;
- (id)lessThan55mIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)lessThan200mIntervalHistogramsCount;
- (void)clearLessThan200mIntervalHistograms;
- (id)lessThan200mIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)anyPositiveIntervalHistogramsCount;
- (void)clearAnyPositiveIntervalHistograms;
- (id)anyPositiveIntervalHistogramAtIndex:(unsigned long long)a0;

@end
