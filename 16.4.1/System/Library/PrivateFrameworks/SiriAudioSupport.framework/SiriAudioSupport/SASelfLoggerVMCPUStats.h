@interface SASelfLoggerVMCPUStats : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mwtId;
    void /* unknown type, empty encoding */ snapshotStage;
    void /* unknown type, empty encoding */ cpuTicksUser;
    void /* unknown type, empty encoding */ cpuTicksSystem;
    void /* unknown type, empty encoding */ cpuTicksIdle;
    void /* unknown type, empty encoding */ cpuTicksNice;
    void /* unknown type, empty encoding */ compressions;
    void /* unknown type, empty encoding */ decompressions;
    void /* unknown type, empty encoding */ pageins;
    void /* unknown type, empty encoding */ faults;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
