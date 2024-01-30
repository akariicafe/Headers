@class NSArray;

@interface ILCallClassificationRequest : ILClassificationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *callCommunications;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;
- (id)initWithCallCommunications:(id)a0;

@end
