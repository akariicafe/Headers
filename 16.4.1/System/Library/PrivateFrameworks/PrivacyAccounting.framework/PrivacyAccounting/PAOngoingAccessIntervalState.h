@class PAAccess;

@interface PAOngoingAccessIntervalState : NSObject

@property (retain, nonatomic) PAAccess *access;
@property (nonatomic) long long retryCount;

- (id)initWithAccess:(id)a0;
- (void).cxx_destruct;

@end
