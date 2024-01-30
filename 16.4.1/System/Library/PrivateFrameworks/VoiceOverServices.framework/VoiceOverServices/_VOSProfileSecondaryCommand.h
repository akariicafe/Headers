@class _VOSProfileCommand, VOSCommand;

@interface _VOSProfileSecondaryCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VOSCommand *command;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long pressCount;
@property (weak, nonatomic) _VOSProfileCommand *primaryProfileCommand;

+ (id)profileSecondaryCommandWithStringValue:(id)a0 context:(unsigned long long)a1 pressCount:(unsigned long long)a2;
+ (id)profileSecondaryCommandWithCommand:(id)a0 context:(unsigned long long)a1 pressCount:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithCommand:(id)a0 context:(unsigned long long)a1 pressCount:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;

@end
