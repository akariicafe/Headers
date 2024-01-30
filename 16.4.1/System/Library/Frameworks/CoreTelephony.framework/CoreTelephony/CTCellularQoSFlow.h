@class NSNumber, CTQoS;

@interface CTCellularQoSFlow : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long flowId;
@property (nonatomic) unsigned long long bearerId;
@property (retain, nonatomic) NSNumber *queueSetId;
@property (retain, nonatomic) NSNumber *is5G;
@property (retain, nonatomic) CTQoS *txQos;
@property (retain, nonatomic) CTQoS *rxQos;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
