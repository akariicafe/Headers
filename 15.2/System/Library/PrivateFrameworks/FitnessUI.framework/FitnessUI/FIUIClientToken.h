@class NSUUID;

@interface FIUIClientToken : NSObject <NSCopying> {
    NSUUID *_UUID;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithUUID:(id)a0;

@end
