@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject

@property (nonatomic) long long day;
@property (readonly, nonatomic) NSMutableSet *events;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithDay:(long long)a0;

@end
