@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying> {
    unsigned long long _type;
}

@property (readonly) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
