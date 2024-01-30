@protocol CADDatabaseProvider;

@interface CADCalendarDatabaseCalStoreInfoProvider : NSObject <CADCalStoreInfoProvider>

@property (readonly, weak, nonatomic) id<CADDatabaseProvider> databaseProvider;

- (void).cxx_destruct;
- (id)storeInfoList;
- (id)initWithDatabaseProvider:(id)a0;

@end
