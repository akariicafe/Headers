@class NSURL, NSString;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSURL *currentIconStateURL;
@property (readonly, copy, nonatomic) NSURL *desiredIconStateURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)loadDesiredIconState:(id *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;
- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithIconStateURL:(id)a0 desiredIconStateURL:(id)a1;
- (BOOL)_save:(id)a0 url:(id)a1 error:(id *)a2;
- (BOOL)_delete:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)_load:(id)a0 error:(id *)a1;

@end
