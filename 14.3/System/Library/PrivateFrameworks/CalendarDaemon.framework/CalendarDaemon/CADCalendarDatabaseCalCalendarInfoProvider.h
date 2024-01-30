@protocol CADDatabaseProvider;

@interface CADCalendarDatabaseCalCalendarInfoProvider : NSObject <CADCalCalendarInfoProvider>

@property (readonly, weak, nonatomic) id<CADDatabaseProvider> databaseProvider;

- (void).cxx_destruct;
- (int)naturalLanguageSuggestionsCalendarRowID;
- (id)calendarRowIDsInStoreWithRowID:(int)a0;
- (id)initWithDatabaseProvider:(id)a0;
- (int)suggestionsCalendarRowID;

@end
