@class NSString, NSMutableArray;

@interface ACCMediaLibraryUpdatePlaylistContent : NSObject

@property (retain, nonatomic) NSMutableArray *contentList;
@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (retain, nonatomic) NSString *revision;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic) int contentStyle;

- (void)addContentItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyDict;
- (id)debugDescription;
- (id)initWithMediaLibrary:(id)a0 persistentID:(unsigned long long)a1 revision:(id)a2;
- (unsigned long long)contentListCount;
- (id)copyContentDictList;
- (id)initWithMediaLibrary:(id)a0 revision:(id)a1 dict:(id)a2;
- (id)copyContentList;
- (void)replaceContentList:(id)a0;
- (void)addContentPersistentID:(unsigned long long)a0;
- (void)replaceContentItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceContentPersistentID:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)getContentItemAtIndex:(unsigned long long)a0;
- (void)iterateContentItems:(id /* block */)a0;
- (void)iterateContentPersistentIDs:(id /* block */)a0;

@end
