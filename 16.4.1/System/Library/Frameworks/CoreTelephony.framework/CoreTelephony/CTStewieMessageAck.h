@class NSError;

@interface CTStewieMessageAck : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long transportType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToMessageAck:(id)a0;

@end
