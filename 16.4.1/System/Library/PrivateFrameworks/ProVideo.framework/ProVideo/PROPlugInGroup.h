@interface PROPlugInGroup : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)displayName;
- (struct __CFUUID { } *)uuid;
- (id)name;
- (id)plugIns;
- (void)addPlugIn:(id)a0;
- (id)initWithUUID:(struct __CFUUID { } *)a0 name:(id)a1 bundle:(id)a2;
- (id)plugInsForProtocols:(id)a0;
- (void)removePlugIn:(id)a0;

@end
