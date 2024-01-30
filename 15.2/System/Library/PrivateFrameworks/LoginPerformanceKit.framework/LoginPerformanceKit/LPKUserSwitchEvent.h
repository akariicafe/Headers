@class NSMutableDictionary, NSDate;

@interface LPKUserSwitchEvent : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSMutableDictionary *signposts;

- (void).cxx_destruct;
- (id)init;

@end
