@class NSData;

@interface RTIDataPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long version;

+ (id)payloadWithData:(id)a0;
+ (id)payloadWithData:(id)a0 version:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0 version:(unsigned long long)a1;

@end
