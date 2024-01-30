@class NSCalendar, HDProfile, HDKeyValueDomain, HDDatabaseTransactionContext;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (copy, nonatomic) NSCalendar *gregorianCalendar;
@property (retain, nonatomic) HDKeyValueDomain *keyValueDomain;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (BOOL)cacheTemplate:(id)a0 error:(id *)a1;
- (id)allCachedTemplatesWithError:(id *)a0;
- (id)templateForDateComponents:(id)a0 error:(id *)a1;

@end
