@class TSTTableDataObjectKeyDict, TSTIntegerKeyDict;

@interface TSTTableDataList : TSPObject {
    int mListType;
    TSTIntegerKeyDict *mData;
    TSTTableDataObjectKeyDict *mIDs;
}

@property (readonly, nonatomic) unsigned int nextID;
@property (readonly, nonatomic) TSTIntegerKeyDict *data;

- (void)dealloc;
- (id)initWithType:(int)a0 context:(id)a1;
- (id)allRichTextPayloadStorages;
- (unsigned long long)flushableSize;
- (void)p_setupWithType:(int)a0 nextKeyID:(unsigned int)a1;
- (id)packageLocator;
- (BOOL)supportsIDMapForType:(int)a0;

@end
