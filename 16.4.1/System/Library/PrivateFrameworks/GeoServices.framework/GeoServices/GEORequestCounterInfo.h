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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (double)durationAverage;
- (unsigned long long)numberOfRequestsForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 result:(unsigned char)a1;
- (void)_appendFormattedCSVStringTo:(id)a0 forAppId:(id)a1;
- (void)_appendFormattedStringTo:(id)a0;
- (void)_generateAggregateStatistics;
- (double)durationAverageForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (double)durationTotal;
- (double)durationTotalForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (void)enumerateRequestTypes:(id /* block */)a0;
- (id)nonZeroResultTypesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (unsigned long long)recvBytes;
- (unsigned long long)recvBytesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (unsigned long long)usedInterfaces;
- (unsigned long long)usedInterfacesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (unsigned long long)xmitBytes;
- (unsigned long long)xmitBytesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;

@end
