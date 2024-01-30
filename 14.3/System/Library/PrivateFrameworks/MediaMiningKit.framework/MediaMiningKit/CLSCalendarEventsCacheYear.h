@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject

@property (nonatomic) long long year;
@property (readonly, nonatomic) NSMutableSet *months;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithYear:(long long)a0;

@end
