@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList {
    NSMutableDictionary *mNamesList;
}

- (id)initWithContext:(id)a0;
- (id)init;
- (long long)count;
- (void)dealloc;
- (unsigned int)maxKey;
- (BOOL)supportsIDMapForType:(int)a0;
- (void *)customFormatForKey:(unsigned int)a0;
- (id)newUniqueNameFromName:(id)a0 preserveSeed:(BOOL)a1;
- (unsigned int)addCustomFormat:(void *)a0 duringImport:(BOOL)a1;
- (void)p_setupNamesList;
- (unsigned int)addCustomFormat:(void *)a0 withOldKey:(unsigned int)a1;
- (id)customFormatWrapperForKey:(unsigned int)a0;
- (id)allNumberKeys;
- (id)newUniqueNameFromName:(id)a0;

@end
