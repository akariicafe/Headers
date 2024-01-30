@interface RequestDispatcherBridges.ConversationalContextContainer : NSObject <AFContextSnapshot, NSSecureCoding> {
    void /* unknown type, empty encoding */ systemDialogActs;
    void /* unknown type, empty encoding */ activeTasks;
    void /* unknown type, empty encoding */ executedTasks;
    void /* unknown type, empty encoding */ entities;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)serializedBackingStore;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
