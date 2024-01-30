@interface WBBookmarksDatabaseHealthInformation : NSObject

@property (readonly, nonatomic) unsigned long long topLevelDuplicateBookmarksCount;
@property (readonly, nonatomic) unsigned long long allDuplicateBookmarksCount;

- (id)initWithTopLevelDuplicateBookmarksCount:(unsigned long long)a0 allDuplicateBookmarksCount:(unsigned long long)a1;

@end
