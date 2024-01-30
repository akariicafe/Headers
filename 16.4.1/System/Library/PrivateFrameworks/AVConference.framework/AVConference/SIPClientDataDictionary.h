@class NSMutableDictionary;

@interface SIPClientDataDictionary : NSObject {
    NSMutableDictionary *allCalls;
}

- (void)dealloc;
- (id)init;
- (id)copyObjectForKey:(id)a0 p2pID:(unsigned int)a1;
- (void)setObject:(id)a0 forKey:(id)a1 forP2PID:(unsigned int)a2;

@end
