@class NSMutableDictionary;

@interface GEORequestCounterStatistics : NSObject <NSSecureCoding> {
    NSMutableDictionary *_resultCounts;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long bytesTransmitted;
@property (readonly, nonatomic) unsigned long long bytesReceived;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)incrementBytesTransmitted:(unsigned long long)a0;
- (void)incrementBytesReceived:(unsigned long long)a0;
- (void)incrementCount:(unsigned long long)a0 forResult:(unsigned char)a1;
- (unsigned long long)countForResult:(unsigned char)a0;
- (void)encodeWithCoder:(id)a0;

@end
