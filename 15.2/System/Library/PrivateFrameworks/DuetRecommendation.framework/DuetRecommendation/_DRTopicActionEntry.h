@class NSString, NSDate;

@interface _DRTopicActionEntry : NSObject

@property (readonly, retain) NSString *topic;
@property (readonly, retain) NSDate *when;
@property (readonly) unsigned long long action;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTopic:(id)a0 when:(id)a1 action:(unsigned long long)a2;

@end
