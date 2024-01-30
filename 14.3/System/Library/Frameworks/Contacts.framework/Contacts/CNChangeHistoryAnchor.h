@class NSData;

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long sequenceNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithSequenceNumber:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
