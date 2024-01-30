@interface FMDownloadOptions : NSObject

@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) unsigned long long downloadPriority;

- (id)init;
- (id)description;
- (void)_configureDefaults;

@end
