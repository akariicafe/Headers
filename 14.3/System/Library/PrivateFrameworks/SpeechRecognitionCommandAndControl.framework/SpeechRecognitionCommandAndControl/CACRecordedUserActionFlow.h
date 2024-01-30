@class NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface CACRecordedUserActionFlow : NSObject <NSSecureCoding> {
    NSArray *_tasks;
    NSDictionary *_environmentSettings;
    NSMutableDictionary *_orignalEnvironmentSettings;
    long long _executingTaskIndex;
    BOOL _isExecuting;
    BOOL _isCancelled;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (readonly) NSArray *userActions;
@property BOOL skipNextAction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)userActions;
- (void)encodeWithCoder:(id)a0;
- (id)plistDescription;
- (id)initWithUserActions:(id)a0;
- (void)beginExecutingWithCompletionBlock:(id /* block */)a0;
- (void)cancelExecution;
- (BOOL)doesNextSpokenCommandMatchIdentifier:(id)a0;
- (void)_configureEnvironment;
- (void)_executeNextActionWithCompletionBlock:(id /* block */)a0;
- (void)_exitFlowWithError:(id)a0 completionBlock:(id /* block */)a1;
- (void)_restoreEnvironment;

@end
