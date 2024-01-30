@class NSArray;

@interface ILCallClassificationRequest : ILClassificationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *callCommunications;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)isEqualToRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallCommunications:(id)a0;

@end
