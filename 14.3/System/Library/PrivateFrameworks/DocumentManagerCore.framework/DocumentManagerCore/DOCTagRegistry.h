@class DOCTagRegistryICloudDataSource, NSString, NSMutableOrderedSet;

@interface DOCTagRegistry : NSObject <DOCTagRegistryDelegate> {
    int _localStorageDidUpdateNotifyToken;
}

@property (retain, nonatomic) NSMutableOrderedSet *userTags;
@property (retain, nonatomic) NSMutableOrderedSet *discoveredTags;
@property (nonatomic) BOOL shouldSynchronizeAfterBatchUpdate;
@property (retain, nonatomic) DOCTagRegistryICloudDataSource *iCloudDataSource;
@property (nonatomic) BOOL inBatchUpdate;
@property (nonatomic) long long tagSerialNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sanitizedTagName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)addTag:(id)a0;
- (void)synchronize;
- (id)_setForTagType:(long long)a0;
- (void)addTag:(id)a0 options:(long long)a1;
- (BOOL)isValidNewTagName:(id)a0;
- (id)_tagNameForComparing:(id)a0;
- (BOOL)_canAddTag:(id)a0;
- (id)_memberTag:(id)a0;
- (BOOL)canReplaceTag:(id)a0 withTag:(id)a1;
- (void)addTags:(id)a0 options:(long long)a1;
- (BOOL)insertTag:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeTags:(id)a0;
- (void)removeAllTagsOfType:(long long)a0;
- (BOOL)replaceTag:(id)a0 withTag:(id)a1;
- (BOOL)moveTag:(id)a0 toIndex:(unsigned long long)a1;
- (id)tagForName:(id)a0;

@end
