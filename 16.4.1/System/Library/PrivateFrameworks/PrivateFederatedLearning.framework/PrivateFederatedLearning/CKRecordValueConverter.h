@interface CKRecordValueConverter : NSObject

+ (void)_validateFieldType:(Class)a0 typeDescription:(id)a1 inCKRecord:(id)a2 field:(id)a3;
+ (double)doubleFrom:(id)a0 field:(id)a1;
+ (BOOL)hasField:(id)a0 inRecord:(id)a1;
+ (long long)int64From:(id)a0 field:(id)a1;
+ (id)stringFrom:(id)a0 field:(id)a1;
+ (id)stringsListFrom:(id)a0 field:(id)a1;

@end
