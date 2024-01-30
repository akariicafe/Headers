@class NSArray, PXCMMInvitationsDataSource;

@interface PXCMMInvitationsDataSourceManager : PXSectionedDataSourceManager

@property (class, readonly) NSArray *keyPathsAffectingCurrentDataSourceManager;

@property (readonly, nonatomic) PXCMMInvitationsDataSource *dataSource;

+ (id)emptyDataSourceManager;
+ (id)currentDataSourceManager;

@end
