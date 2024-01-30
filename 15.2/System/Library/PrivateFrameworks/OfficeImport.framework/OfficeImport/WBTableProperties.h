@interface WBTableProperties : NSObject

+ (void)readFrom:(id)a0 wrdProperties:(void *)a1 tracked:(void *)a2 properties:(id)a3;
+ (void)mapWordProperties:(void *)a0 reader:(id)a1 toProperties:(id)a2;
+ (id)formattingChangeDate:(const struct WrdDateTime { } *)a0;

@end
