@class PSConfirmationSpecifier, CHManager, PSSpecifier;
@protocol PSUIResetStatisticsGroupDelegate;

@interface PSUIResetStatisticsGroup : NSObject

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (nonatomic) unsigned long long policy;
@property (weak, nonatomic) id<PSUIResetStatisticsGroupDelegate> delegate;

- (id)getLogger;
- (id)initWithPolicy:(unsigned long long)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (id)_lastUpdateDate;
- (void)_updateLastResetText;
- (void)clearStats:(id)a0;

@end
