@class NSString, NSDictionary, WBSTrialIdentifiers, TRIClient, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBSTrialManager : NSObject {
    NSMutableDictionary *_customFactorsDictionary;
}

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSDictionary *factors;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL ready;
@property (readonly, nonatomic) WBSTrialIdentifiers *identifiers;

+ (id)shared;

- (BOOL)isReady;
- (void).cxx_destruct;
- (id)init;
- (void)fetchFactorsInNamespace:(id)a0;
- (id)numberFactorWithName:(id)a0;
- (BOOL)isCFEnabled;
- (id)getRetrievalFactorName:(id)a0 forCF:(BOOL)a1;
- (id)factorWithName:(id)a0;
- (BOOL)runCFFlow;
- (double)CFSearchTimeoutForDefault:(double)a0;
- (BOOL)inExperiment;
- (void)setFactorWithName:(id)a0 value:(id)a1;
- (id)stringFactorWithName:(id)a0;
- (BOOL)getBoolFactor:(id)a0 forCF:(BOOL)a1 forDefault:(BOOL)a2;
- (long long)getIntFactor:(id)a0 forCF:(BOOL)a1 forDefault:(long long)a2;
- (double)getFloatFactor:(id)a0 forCF:(BOOL)a1 forDefault:(double)a2;

@end
