@interface WBTableRowProperties : NSObject

+ (void)mapProperties:(id)a0 toWordProperties:(void *)a1;
+ (void)mapWordProperties:(void *)a0 toProperties:(id)a1;
+ (void)readFrom:(id)a0 wrdProperties:(void *)a1 tracked:(void *)a2 properties:(id)a3;
+ (void)write:(id)a0 properties:(id)a1 wrdProperties:(void *)a2 tracked:(void *)a3;

@end
