@class NSArray, NSDictionary;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {
    NSDictionary *_requestTypeStatistics;
    unsigned long long _bytesTransmitted;
    unsigned long long _bytesReceived;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *requestTypes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)xmitBytes;
- (unsigned long long)recvBytes;
- (id)_formattedString;
- (void)_generateAggregateStatistics;
- (unsigned long long)numberOfRequestsForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 result:(unsigned char)a1;
- (unsigned long long)xmitBytesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (unsigned long long)recvBytesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (void)enumerateRequestTypes:(id /* block */)a0;
- (id)nonZeroResultTypesForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
