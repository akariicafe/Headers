@class NSString;

@interface IKFolder : NSObject

@property (nonatomic) long long folderID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL syncToMobile;
@property (nonatomic) unsigned long long position;

+ (id)archiveFolder;
+ (id)folderWithFolderID:(long long)a0;
+ (id)starredFolder;
+ (id)unreadFolder;

- (void)dealloc;
- (id)init;
- (id)description;
- (id)initWithFolderID:(long long)a0;

@end
