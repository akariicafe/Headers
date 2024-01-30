@interface WBTable : NSObject

+ (void)initPropertiesFrom:(id)a0 to:(id)a1 in:(id)a2;
+ (BOOL)isTableFloating:(const void *)a0 tracked:(const void *)a1;
+ (void)readFrom:(id)a0 textRuns:(id)a1 table:(id)a2;
+ (void)readRowFrom:(id)a0 textRuns:(id)a1 to:(id)a2;
+ (BOOL)tryToReadRowFrom:(id)a0 textRuns:(id)a1 to:(id)a2;

@end
