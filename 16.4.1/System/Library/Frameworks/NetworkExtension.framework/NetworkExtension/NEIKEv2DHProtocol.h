@interface NEIKEv2DHProtocol : NSObject <NSCopying> {
    unsigned long long _group;
}

@property (readonly) unsigned long long group;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithGroup:(unsigned long long)a0;

@end
