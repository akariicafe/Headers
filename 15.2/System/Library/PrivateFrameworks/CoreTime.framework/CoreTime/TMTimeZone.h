@class NSString;

@interface TMTimeZone : NSObject

@property (copy) NSString *source;
@property (copy) NSString *olsonName;

+ (id)timeZoneWithOlsonName:(id)a0 fromSource:(id)a1;

- (id)initWithOlsonName:(id)a0 fromSource:(id)a1;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)hasSameOlsonNameAs:(id)a0;

@end
