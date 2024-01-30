@interface SKRConversationCommitResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ activeTasks;
    void /* unknown type, empty encoding */ completedTasks;
    void /* unknown type, empty encoding */ flowUnhandledReason;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ nextPluginActionData;
    void /* unknown type, empty encoding */ reparseExecutionRequestID;
    void /* unknown type, empty encoding */ reparseUserID;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
