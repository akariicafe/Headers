@class NSDate;

@interface MSReadLaterTriageAction : MSTriageAction

@property (retain, nonatomic) NSDate *readLaterDate;

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 delegate:(id)a1 readLaterDate:(id)a2;

@end
