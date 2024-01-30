@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject

@property (nonatomic) long long year;
@property (readonly, nonatomic) NSMutableSet *months;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithYear:(long long)a0;

@end
