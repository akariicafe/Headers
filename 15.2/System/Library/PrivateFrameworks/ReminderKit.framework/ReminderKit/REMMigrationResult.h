@class NSString;

@interface REMMigrationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) BOOL isObserver;
@property (readonly, nonatomic) double timeElapsed;
@property (readonly, nonatomic) unsigned long long listsMigrated;
@property (readonly, nonatomic) unsigned long long remindersMigrated;
@property (readonly, nonatomic) NSString *log;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 IsObserver:(BOOL)a1 timeElapsed:(double)a2 listsMigrated:(unsigned long long)a3 remindersMigrated:(unsigned long long)a4 log:(id)a5;

@end
