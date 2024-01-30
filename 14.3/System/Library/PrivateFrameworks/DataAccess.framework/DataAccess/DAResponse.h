@interface DAResponse : DAAction

@property (nonatomic) long long status;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 serverId:(id)a2 status:(long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
