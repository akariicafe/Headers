@class NSString, NSDate;

@interface PLDuetEventTransition : NSObject

@property (retain) NSDate *date;
@property (retain) NSString *bundleID;
@property BOOL isStart;

- (void).cxx_destruct;
- (id)description;

@end
