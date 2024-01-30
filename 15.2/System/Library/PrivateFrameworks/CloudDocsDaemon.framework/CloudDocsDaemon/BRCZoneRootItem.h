@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (BOOL)isZoneRoot;
- (BOOL)saveToDB;
- (id)parentItemID;
- (BOOL)isShareableItem;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (id)fileID;
- (id)asFSRoot;
- (id)parentItemOnFS;
- (BOOL)isFSRoot;
- (id)st;

@end
