@interface TSCHChartSeriesGenericPropertyMap : TSSPropertyMap

+ (id)properties;
+ (id)imageFillProperties;
+ (void)savePropertyMap:(id)a0 toArchive:(void *)a1 archiver:(id)a2;

- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
