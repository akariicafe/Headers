@class NSUUID, NSString;

@interface UPModelIdentifier : NSObject <NSCopying>

@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSString *appBundleId;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAppBundleId:(id)a0;

@end
