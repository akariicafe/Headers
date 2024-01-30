@interface WBTableCellBodyProperties : NSObject

+ (id)formattingChangeDate:(const struct WrdDateTime { } *)a0;
+ (void)mapProperties:(id)a0 toWordProperties:(void *)a1 index:(unsigned long long)a2;
+ (void)mapWordProperties:(void *)a0 toProperties:(id)a1 index:(unsigned long long)a2;
+ (void)readFrom:(void *)a0 tracked:(void *)a1 properties:(id)a2 index:(unsigned long long)a3;
+ (void)write:(id)a0 wrdProperties:(void *)a1 tracked:(void *)a2 index:(unsigned long long)a3;

@end
