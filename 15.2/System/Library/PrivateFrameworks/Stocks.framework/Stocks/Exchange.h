@class NSString, NSDate;

@interface Exchange : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastCloseDate;
@property (retain, nonatomic) NSDate *nextOpenDate;
@property (nonatomic) long long status;
@property (nonatomic) double streamInterval;
@property (readonly, nonatomic) double lastUpdateTime;

+ (id)formattedExchangeNameForName:(id)a0;

- (void)updateWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)archiveDictionary;
- (BOOL)marketIsOpen;
- (void)_updateWithDictionary:(id)a0 newUpdate:(BOOL)a1;
- (BOOL)marketIsAfterHours;

@end
