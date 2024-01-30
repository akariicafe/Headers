@class PSConfirmationSpecifier, CHManager, PSSpecifier;
@protocol PSUIResetStatisticsGroupDelegate;

@interface PSUIResetStatisticsGroup : NSObject

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (nonatomic) unsigned long long policy;
@property (weak, nonatomic) id<PSUIResetStatisticsGroupDelegate> delegate;

- (void).cxx_destruct;
- (id)specifiers;
- (id)initWithPolicy:(unsigned long long)a0;
- (id)_lastUpdateDate;
- (void)clearStats:(id)a0;
- (void)_updateLastResetText;

@end
