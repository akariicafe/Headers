@class NSMutableArray;

@interface _VNWeakSessionsCollection : NSObject {
    NSMutableArray *_weakSessionWrappers;
}

- (id)allSessionsDroppingWeakZeroedObjects:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addSession:(id)a0 droppingWeakZeroedObjects:(BOOL)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
