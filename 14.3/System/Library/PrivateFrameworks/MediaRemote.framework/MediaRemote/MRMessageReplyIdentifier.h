@interface MRMessageReplyIdentifier : NSObject

@property (nonatomic) unsigned long long messageNumber;
@property (copy, nonatomic) id /* block */ reply;

- (void).cxx_destruct;

@end
