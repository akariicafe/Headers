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

+ (Class)anyPositiveIntervalHistogramType;
+ (Class)lessThan10mIntervalHistogramType;
+ (Class)lessThan200mIntervalHistogramType;
+ (Class)lessThan25mIntervalHistogramType;
+ (Class)lessThan55mIntervalHistogramType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addAnyPositiveIntervalHistogram:(id)a0;
- (void)addLessThan10mIntervalHistogram:(id)a0;
- (void)addLessThan200mIntervalHistogram:(id)a0;
- (void)addLessThan25mIntervalHistogram:(id)a0;
- (void)addLessThan55mIntervalHistogram:(id)a0;
- (id)anyPositiveIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)anyPositiveIntervalHistogramsCount;
- (void)clearAnyPositiveIntervalHistograms;
- (void)clearLessThan10mIntervalHistograms;
- (void)clearLessThan200mIntervalHistograms;
- (void)clearLessThan25mIntervalHistograms;
- (void)clearLessThan55mIntervalHistograms;
- (id)lessThan10mIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)lessThan10mIntervalHistogramsCount;
- (id)lessThan200mIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)lessThan200mIntervalHistogramsCount;
- (id)lessThan25mIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)lessThan25mIntervalHistogramsCount;
- (id)lessThan55mIntervalHistogramAtIndex:(unsigned long long)a0;
- (unsigned long long)lessThan55mIntervalHistogramsCount;

@end
