@class NSString, NSArray, NSDateFormatter;

@interface HKTableFormatter : NSObject {
    NSArray *_titles;
    NSArray *_columns;
    NSDateFormatter *_dateFormatter;
}

@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long rowCount;

+ (id)formatterForCodableCondensedWorkouts;

- (void)appendWorkout:(id)a0;
- (void)_appendColumn:(id)a0 width:(long long)a1 padding:(id)a2 row:(id)a3;
- (id)_formattedTableHeaderForColumnWidths:(id)a0;
- (void)_enumerateFormattedRowsWithColumnWidths:(id)a0 handler:(id /* block */)a1;
- (id)stringFromDate:(id)a0 fallback:(id)a1;
- (id)formattedTableHeader;
- (void)enumerateFormattedRows:(id /* block */)a0;
- (id)stringFromTimeInterval:(double)a0;
- (void)appendRow:(id)a0;
- (id)_columnWidths;
- (void).cxx_destruct;
- (id)formattedTable;
- (id)init;
- (void)appendHeterogenousRow:(id)a0;
- (id)stringFromDate:(id)a0;
- (id)initWithColumnTitles:(id)a0;

@end
