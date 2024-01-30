@class NSUUID;

@interface FIUIClientToken : NSObject <NSCopying> {
    NSUUID *_UUID;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithUUID:(id)a0;

@end
