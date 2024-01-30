@class ASTControlCommand, ASTIdentity;

@interface ASTContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long clientStatus;
@property (nonatomic) long long command;
@property (nonatomic) BOOL testSuiteRunning;
@property (readonly, nonatomic) ASTControlCommand *controlCommand;
@property (readonly, copy, nonatomic) ASTIdentity *identity;

- (id)initWithIdentity:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
