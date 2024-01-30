@class NSString, _ICContact;

@interface _ICContactRecord : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) _ICContact *contact;
@property (readonly, nonatomic) unsigned char changeType;

- (BOOL)isEqualToContactRecord:(id)a0;
- (id)initWithIdentifier:(id)a0 contact:(id)a1 changeType:(unsigned char)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
