@class NSString;

@interface DAMoveAction : DAAction

@property (retain, nonatomic) NSString *sourceContainerId;
@property (retain, nonatomic) NSString *sourceServerId;
@property (retain, nonatomic) NSString *destinationContainerId;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 sourceContainerId:(id)a2 sourceServerId:(id)a3 destinationContainerId:(id)a4;

@end
