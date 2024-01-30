@class NSData;

@interface CTTransportSTK : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int index;
@property (retain, nonatomic) NSData *key_epki;
@property (retain, nonatomic) NSData *stk;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSTK:(id)a0 forIdx:(int)a1;
- (id)initWithSTK:(id)a0 forIdx:(int)a1 epki:(id)a2;

@end
