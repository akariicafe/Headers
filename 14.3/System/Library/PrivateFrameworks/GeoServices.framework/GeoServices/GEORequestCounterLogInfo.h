@class NSDictionary;

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding> {
    NSDictionary *_dict;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double oldestTimestamp;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } requestType;

+ (id)counterLogInfoWithDictionary:(id)a0;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)xmitBytes;
- (unsigned long long)recvBytes;
- (id)_formattedString;
- (id)_formattedCSVString;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
