@class _VOSProfileCommand, VOSCommand;

@interface _VOSProfileSlaveCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VOSCommand *command;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long pressCount;
@property (weak, nonatomic) _VOSProfileCommand *masterProfileCommand;

+ (id)profileSlaveCommandWithCommand:(id)a0 context:(unsigned long long)a1 pressCount:(unsigned long long)a2;
+ (id)profileSlaveCommandWithStringValue:(id)a0 context:(unsigned long long)a1 pressCount:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCommand:(id)a0 context:(unsigned long long)a1 pressCount:(unsigned long long)a2;

@end
