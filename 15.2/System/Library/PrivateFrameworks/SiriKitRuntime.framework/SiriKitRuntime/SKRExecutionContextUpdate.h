@class NSString;

@interface SKRExecutionContextUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ provideContextCommand;
    void /* unknown type, empty encoding */ nativeFlowContextCommand;
    void /* unknown type, empty encoding */ systemDialogActs;
    void /* unknown type, empty encoding */ activeTasks;
    void /* unknown type, empty encoding */ completedTasks;
    void /* unknown type, empty encoding */ rrEntities;
    void /* unknown type, empty encoding */ newTasks;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
