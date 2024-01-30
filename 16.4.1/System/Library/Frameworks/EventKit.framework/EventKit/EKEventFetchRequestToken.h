@class EKEventStore;

@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken>

@property (readonly, weak, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) unsigned int token;

- (id)initWithEventStore:(id)a0 token:(int)a1;
- (void)cancel;
- (void).cxx_destruct;

@end
