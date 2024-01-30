@class NSString, NSURL, NSDate;

@interface MTNextAlarm : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isSleepAlarm;
@property (readonly, copy, nonatomic) NSURL *clockAppSectionURL;

- (void).cxx_destruct;
- (id)description;

@end
