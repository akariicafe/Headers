@class NSMutableDictionary, NSDate;

@interface LPKUserSwitchEvent : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSMutableDictionary *signposts;

- (id)init;
- (void).cxx_destruct;

@end
