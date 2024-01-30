@class UIColor;

@interface _HKCalendarDayCellIconConfiguration : NSObject <NSCopying> {
    long long _dateIndex;
    UIColor *_color;
    long long _style;
}

+ (id)configurationWithDateIndex:(long long)a0 color:(id)a1 style:(long long)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
