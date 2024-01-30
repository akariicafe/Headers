@class NSMutableArray;

@interface _VNWeakSessionsCollection : NSObject {
    NSMutableArray *_weakSessionWrappers;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)addSession:(id)a0 droppingWeakZeroedObjects:(BOOL)a1;
- (void)_enumerateSessionsDroppingWeakZeroedObjects:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)allSessionsDroppingWeakZeroedObjects:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
