@class NSString;

@interface W5Peer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *peerID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *version;
@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL nearby;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)type;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPeer:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
