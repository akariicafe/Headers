@class NSDate;

@interface BLTClientReplyTimeout : NSObject

@property (retain, nonatomic) NSDate *timeout;
@property (copy, nonatomic) id /* block */ timeoutHandler;

- (void).cxx_destruct;

@end
