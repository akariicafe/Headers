@class NSString;

@interface PPClientFeedbackHelper : NSObject {
    NSString *_parentObjectClass;
    NSString *_clientIdentifier;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)initWithParentObject:(id)a0;

@end
