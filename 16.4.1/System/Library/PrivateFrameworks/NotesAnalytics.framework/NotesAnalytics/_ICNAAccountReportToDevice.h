@class NSMutableDictionary;

@interface _ICNAAccountReportToDevice : NSObject

@property (retain, nonatomic) NSMutableDictionary *countOfAccountsByType;
@property (retain, nonatomic) NSMutableDictionary *countOfNotesByType;

- (id)init;
- (void).cxx_destruct;
- (id)accountTypeSummary;
- (void)reportAccountType:(long long)a0 noteCount:(unsigned long long)a1;

@end
