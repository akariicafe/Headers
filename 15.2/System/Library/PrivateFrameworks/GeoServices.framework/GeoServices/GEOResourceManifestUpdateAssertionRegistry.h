@class NSString, geo_isolater, NSMutableArray;

@interface GEOResourceManifestUpdateAssertionRegistry : NSObject <GEOPListStateCapturing> {
    geo_isolater *_isolation;
    NSMutableArray *_assertions;
    unsigned long long _stateCaptureHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRegistry;

- (BOOL)hasActiveAssertions;
- (void)removeAssertion:(id)a0;
- (id)addInternalAssertionForReason:(id)a0;
- (id)activeAssertionsDescription;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)addAssertionForProcess:(id)a0 reason:(id)a1 creationTimestamp:(double)a2;
- (void)dealloc;

@end
