@protocol CADDatabaseProvider;

@interface CADCalendarDatabaseCalStoreInfoProvider : NSObject <CADCalStoreInfoProvider>

@property (readonly, weak, nonatomic) id<CADDatabaseProvider> databaseProvider;

- (id)storeInfoList;
- (void).cxx_destruct;
- (id)initWithDatabaseProvider:(id)a0;

@end
