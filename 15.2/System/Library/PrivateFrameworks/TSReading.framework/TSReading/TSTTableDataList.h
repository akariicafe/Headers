@class TSTTableDataObjectKeyDict, TSTIntegerKeyDict;

@interface TSTTableDataList : TSPObject {
    int mListType;
    TSTIntegerKeyDict *mData;
    TSTTableDataObjectKeyDict *mIDs;
}

@property (readonly, nonatomic) unsigned int nextID;
@property (readonly, nonatomic) TSTIntegerKeyDict *data;

- (id)initWithType:(int)a0 context:(id)a1;
- (void)dealloc;
- (id)packageLocator;
- (BOOL)supportsIDMapForType:(int)a0;
- (void)p_setupWithType:(int)a0 nextKeyID:(unsigned int)a1;
- (unsigned long long)flushableSize;
- (id)allRichTextPayloadStorages;

@end
