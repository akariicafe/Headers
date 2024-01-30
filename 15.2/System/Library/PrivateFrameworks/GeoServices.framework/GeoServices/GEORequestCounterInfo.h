@class NSArray, NSDictionary;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {
    NSDictionary *_requestTypeStatistics;
    unsigned long long _bytesTransmitted;
    unsigned long long _bytesReceived;
    long long _durationUSeconds;
    int _durationCount;
    unsigned long long _usedInterfaces;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *requestTypes;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)xmitBytes;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)recvBytes;
- (void)_appendFormattedStringTo:(id)a0;
- (void)_appendFormattedCSVStringTo:(id)a0 forAppId:(id)a1;
- (unsigned long long)usedInterfaces;
- (double)durationTotal;
- (double)durationAverage;
- (void)_generateAggregateStatistics;
- (unsigned long long)numberOfRequestsForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 result:(unsigned char)a1;
- (unsigned long long)xmitBytesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (unsigned long long)recvBytesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (double)durationTotalForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (double)durationAverageForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (unsigned long long)usedInterfacesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (void)enumerateRequestTypes:(id /* block */)a0;
- (id)nonZeroResultTypesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
