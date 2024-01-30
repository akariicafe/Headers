@class CLSInspector, NSString, NSArray, CLSClueCollection, CLSInvestigationFeeder, NSMutableDictionary, CLSInvestigationHelper, NSMutableArray;
@protocol CLSInvestigationDelegate, CLSInvestigationInterviewDelegate;

@interface CLSInvestigation : NSObject {
    NSArray *_informants;
    NSMutableDictionary *_tracesLogsByURIs;
    NSMutableArray *_tracesLogsURIs;
    struct { unsigned char delegateWillBegin : 1; unsigned char delegateDidEnd : 1; unsigned char delegateNumberOfItems : 1; unsigned char delegateSampleOfItems : 1; } _investigationFlags;
}

@property (readonly, retain, nonatomic) CLSInvestigationFeeder *feeder;
@property BOOL enableDebuggingClues;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, retain, nonatomic) NSMutableArray *profiles;
@property (weak, nonatomic) id<CLSInvestigationDelegate> delegate;
@property (weak, nonatomic) id<CLSInvestigationInterviewDelegate> interviewDelegate;
@property (retain, nonatomic) id context;
@property (readonly, retain) CLSClueCollection *clueCollection;
@property (readonly, weak, nonatomic) CLSInspector *inspector;
@property (nonatomic) unsigned long long precision;
@property (readonly) CLSInvestigationHelper *helper;

+ (id)investigationWithProfiles:(id)a0 clueDates:(id)a1 clueLocations:(id)a2 cluePeoples:(id)a3 helper:(id)a4;
+ (id)investigationWithProfiles:(id)a0 helper:(id)a1;

- (unsigned long long)numberOfItems;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHelper:(id)a0;
- (id)initWithFeeder:(id)a0 profiles:(id)a1 helper:(id)a2;
- (void)_didEndInvestigation:(BOOL)a0;
- (id)_traceStringForType:(unsigned long long)a0;
- (void)_willBeginInvestigation:(id)a0;
- (void)addTraceFromObject:(id)a0 feature:(id)a1 type:(unsigned long long)a2 context:(id)a3 withDescriptionFormat:(id)a4;
- (id)description:(BOOL)a0;
- (id)initWithClueCollection:(id)a0 profiles:(id)a1 helper:(id)a2;
- (id)initWithProfiles:(id)a0 helper:(id)a1;
- (id)sampleOfItems;
- (id)tracesDescription;

@end
