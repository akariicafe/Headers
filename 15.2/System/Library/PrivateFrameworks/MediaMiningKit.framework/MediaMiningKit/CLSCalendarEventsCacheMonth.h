@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject

@property (nonatomic) long long month;
@property (readonly, nonatomic) NSMutableSet *days;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithMonth:(long long)a0;

@end
