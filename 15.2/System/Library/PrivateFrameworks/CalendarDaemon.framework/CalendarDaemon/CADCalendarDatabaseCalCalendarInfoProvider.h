@protocol CADDatabaseProvider;

@interface CADCalendarDatabaseCalCalendarInfoProvider : NSObject <CADCalCalendarInfoProvider>

@property (readonly, weak, nonatomic) id<CADDatabaseProvider> databaseProvider;

- (int)naturalLanguageSuggestionsCalendarRowID;
- (id)calendarRowIDsInStoreWithRowID:(int)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseProvider:(id)a0;
- (int)suggestionsCalendarRowID;

@end
