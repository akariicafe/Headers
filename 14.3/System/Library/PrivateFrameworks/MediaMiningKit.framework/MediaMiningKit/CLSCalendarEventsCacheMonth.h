@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject

@property (nonatomic) long long month;
@property (readonly, nonatomic) NSMutableSet *days;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithMonth:(long long)a0;

@end
