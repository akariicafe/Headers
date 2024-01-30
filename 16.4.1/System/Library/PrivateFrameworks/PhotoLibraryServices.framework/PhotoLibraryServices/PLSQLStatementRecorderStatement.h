@class NSString, NSArray;

@interface PLSQLStatementRecorderStatement : NSObject

@property (retain, nonatomic) NSString *normalizedStatementSQL;
@property (retain, nonatomic) NSString *statementSQL;
@property (retain, nonatomic) NSString *queryPlan;
@property (retain, nonatomic) NSString *mocName;
@property (nonatomic) long long pagesHit;
@property (nonatomic) long long pagesMissed;
@property (retain, nonatomic) NSArray *firstBacktrace;
@property (nonatomic) unsigned long long backtraceHash;
@property (nonatomic) double time;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int vmSteps;
@property (nonatomic) unsigned int fullscanSteps;
@property (nonatomic) unsigned int qos;
@property (retain, nonatomic) NSString *statusMessage;
@property (nonatomic) long long photoLibraryID;
@property (nonatomic) BOOL isSearch;
@property (readonly, nonatomic) BOOL isInternal;

+ (BOOL)isInternalForStatementSQL:(id)a0;
+ (long long)libraryForDbURL:(id)a0;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)jsonFragmentData;

@end
