@class NSString;

@interface DAMoveAction : DAAction

@property (retain, nonatomic) NSString *sourceContainerId;
@property (retain, nonatomic) NSString *sourceServerId;
@property (retain, nonatomic) NSString *destinationContainerId;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 sourceContainerId:(id)a2 sourceServerId:(id)a3 destinationContainerId:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
