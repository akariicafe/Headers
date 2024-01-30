@class NSString;

@interface PPClientFeedbackHelper : NSObject {
    NSString *_parentObjectClass;
    NSString *_clientIdentifier;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (id)initWithParentObject:(id)a0;
- (void).cxx_destruct;

@end
