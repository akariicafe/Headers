@interface ECUtils : NSObject

+ (id)renameFunction:(id)a0;
+ (id)dateFromXlDateTimeNumber:(double)a0 edWorkbook:(id)a1;
+ (double)dateTimeNumberFromNSDate:(id)a0 edWorkbook:(id)a1;
+ (unsigned int)dateTimeOffsetForBuggy1900Dates:(double)a0 edWorkbook:(id)a1;
+ (BOOL)isRenameFunction:(id)a0;
+ (BOOL)isValidDateTime:(double)a0 edWorkbook:(id)a1;
+ (id)lassoDefaultTableName;
+ (id)lassoStyleTableReferenceFromTableId:(id)a0;
+ (id)renameMap;
+ (double)timeIntervalFromXlDateTimeNumber:(double)a0 edWorkbook:(id)a1;
+ (BOOL)validDateInExcel:(id)a0 edWorkbook:(id)a1;

@end
