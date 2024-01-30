@interface BRCSharedServerItem : BRCServerItem

- (id)parentItemIDOnFS;
- (BOOL)isSharedToMeTopLevelItem;
- (id)parentItemOnFS;
- (BOOL)isSharedToMeChildItem;
- (id)parentLocalItemOnFS;
- (id)fallbackParentItemOnFS;
- (id)fallbackParentServerItemOnFS;
- (id)aliasDerivedStructure;
- (id)parentItemIDOnFSInDB:(id)a0;
- (id)fallbackParentItemIDOnFS;
- (id)st;
- (id)parentZoneOnFS;
- (id)fallbackParentAppLibraryOnFS;
- (id)asSharedItem;

@end
