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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToPeer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (long long)type;
- (unsigned long long)hash;
- (void)dealloc;

@end
