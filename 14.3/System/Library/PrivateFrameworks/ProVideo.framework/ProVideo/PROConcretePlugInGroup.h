@class NSString, NSMutableDictionary, NSMutableArray, NSLock;

@interface PROConcretePlugInGroup : NSObject {
    NSMutableArray *plugIns;
    struct __CFUUID { } *uuidRef;
    NSString *name;
    NSString *displayName;
    NSMutableDictionary *protocols;
    NSLock *mutex;
}

- (void)dealloc;
- (unsigned long long)hash;
- (struct __CFUUID { } *)uuid;
- (id)description;
- (id)uuidString;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)plugIns;
- (id)displayName;
- (id)plugInsForProtocols:(id)a0;
- (void)addPlugIn:(id)a0;
- (BOOL)isEqualToPlugInGroup:(id)a0;
- (id)initWithUUID:(struct __CFUUID { } *)a0 name:(id)a1 bundle:(id)a2;
- (void)removePlugIn:(id)a0;

@end
