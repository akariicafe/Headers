@class NSString, NSMutableArray;

@interface ACCMediaLibraryUpdatePlaylistContent : NSObject

@property (retain, nonatomic) NSMutableArray *contentList;
@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (retain, nonatomic) NSString *revision;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic) int contentStyle;

- (id)debugDescription;
- (void)addContentItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyDict;
- (id)copyContentList;
- (void)addContentPersistentID:(unsigned long long)a0;
- (unsigned long long)contentListCount;
- (id)copyContentDictList;
- (id)getContentItemAtIndex:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 persistentID:(unsigned long long)a1 revision:(id)a2;
- (id)initWithMediaLibrary:(id)a0 revision:(id)a1 dict:(id)a2;
- (void)iterateContentItems:(id /* block */)a0;
- (void)iterateContentPersistentIDs:(id /* block */)a0;
- (void)replaceContentItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceContentList:(id)a0;
- (void)replaceContentPersistentID:(unsigned long long)a0 atIndex:(unsigned long long)a1;

@end
