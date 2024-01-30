@class NSString, NSMutableDictionary, NSMutableArray, NSLock;

@interface PROConcretePlugInGroup : NSObject {
    NSMutableArray *plugIns;
    struct __CFUUID { } *uuidRef;
    NSString *name;
    NSString *displayName;
    NSMutableDictionary *protocols;
    NSLock *mutex;
}

- (id)displayName;
- (id)uuidString;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct __CFUUID { } *)uuid;
- (id)name;
- (unsigned long long)hash;
- (void)dealloc;
- (id)plugIns;
- (id)plugInsForProtocols:(id)a0;
- (void)addPlugIn:(id)a0;
- (BOOL)isEqualToPlugInGroup:(id)a0;
- (id)initWithUUID:(struct __CFUUID { } *)a0 name:(id)a1 bundle:(id)a2;
- (void)removePlugIn:(id)a0;

@end
