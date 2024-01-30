@class PSConfirmationSpecifier, CHManager, PSSpecifier;
@protocol PSUIResetStatisticsGroupDelegate;

@interface PSUIResetStatisticsGroup : NSObject

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (nonatomic) unsigned long long policy;
@property (weak, nonatomic) id<PSUIResetStatisticsGroupDelegate> delegate;

- (id)specifiers;
- (id)initWithPolicy:(unsigned long long)a0;
- (id)_lastUpdateDate;
- (void).cxx_destruct;
- (void)clearStats:(id)a0;
- (void)_updateLastResetText;

@end
