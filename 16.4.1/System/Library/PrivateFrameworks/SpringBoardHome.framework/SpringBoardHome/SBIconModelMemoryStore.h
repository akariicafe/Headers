@class NSDictionary, NSString;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore>

@property (copy, nonatomic) NSDictionary *currentState;
@property (copy, nonatomic) NSDictionary *desiredState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)loadDesiredIconState:(id *)a0;
- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;
- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCurrentState:(id)a0 desiredState:(id)a1;

@end
