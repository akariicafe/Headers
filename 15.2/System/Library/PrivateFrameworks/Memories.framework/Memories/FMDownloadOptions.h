@interface FMDownloadOptions : NSObject

@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) unsigned long long downloadPriority;

- (id)description;
- (id)init;
- (void)_configureDefaults;

@end
