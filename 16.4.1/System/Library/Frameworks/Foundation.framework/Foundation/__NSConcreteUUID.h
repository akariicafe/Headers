@interface __NSConcreteUUID : NSUUID {
    unsigned char _uuidBytes[16];
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (void)getUUIDBytes:(unsigned char[16])a0;
- (id)initWithUUIDString:(id)a0;
- (id)description;
- (id)UUIDString;

@end
