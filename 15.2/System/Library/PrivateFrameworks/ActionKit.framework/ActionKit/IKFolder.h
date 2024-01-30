@class NSString;

@interface IKFolder : NSObject

@property (nonatomic) long long folderID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL syncToMobile;
@property (nonatomic) unsigned long long position;

+ (id)unreadFolder;
+ (id)starredFolder;
+ (id)archiveFolder;
+ (id)folderWithFolderID:(long long)a0;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithFolderID:(long long)a0;

@end
