@interface TSUMutableUUIDSet : TSUUUIDSet

- (BOOL)addUUID:(const void *)a0;
- (BOOL)removeUUID:(const void *)a0;
- (void)addUuidsFromVector:(const void *)a0;
- (void)addUUIDs:(const void *)a0;
- (void)addUuidsFromSet:(id)a0;
- (void)removeAllUuids;
- (void)removeUUIDs:(const void *)a0;
- (void)removeUuidsFromSet:(id)a0;
- (void)removeUuidsFromVector:(const void *)a0;

@end
