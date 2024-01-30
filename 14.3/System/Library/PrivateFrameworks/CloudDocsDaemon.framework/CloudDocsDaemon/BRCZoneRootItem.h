@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)st;
- (id)fileID;
- (id)parentItemID;
- (BOOL)isFSRoot;
- (BOOL)isZoneRoot;
- (BOOL)saveToDB;
- (BOOL)isShareableItem;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (id)parentItemOnFS;
- (id)asFSRoot;

@end
