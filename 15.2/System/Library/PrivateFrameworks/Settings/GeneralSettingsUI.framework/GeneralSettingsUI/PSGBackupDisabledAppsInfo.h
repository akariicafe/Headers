@class NSArray;

@interface PSGBackupDisabledAppsInfo : NSObject

@property (retain, nonatomic) NSArray *backupDisabledAppsForDisplay;
@property (nonatomic) BOOL includePhoto;
@property (nonatomic) long long backupDisabledAppCount;

- (void).cxx_destruct;

@end
