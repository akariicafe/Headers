@class NSMutableArray;

@interface _VNWeakSessionsCollection : NSObject {
    NSMutableArray *_weakSessionWrappers;
}

- (id)description;
- (void)addSession:(id)a0 droppingWeakZeroedObjects:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)allSessionsDroppingWeakZeroedObjects:(BOOL)a0;
- (unsigned long long)hash;

@end
