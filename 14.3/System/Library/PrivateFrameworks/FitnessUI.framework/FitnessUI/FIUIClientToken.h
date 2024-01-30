@class NSUUID;

@interface FIUIClientToken : NSObject <NSCopying> {
    NSUUID *_UUID;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithUUID:(id)a0;

@end
