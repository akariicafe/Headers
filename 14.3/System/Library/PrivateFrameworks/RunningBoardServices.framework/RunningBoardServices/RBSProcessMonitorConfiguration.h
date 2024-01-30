@class RBSProcessStateDescriptor, NSArray, NSString, NSHashTable;

@interface RBSProcessMonitorConfiguration : NSObject <RBSProcessMonitorConfiguring, NSCopying, RBSXPCSecureCoding> {
    NSHashTable *_matchedHandles;
    NSString *_desc;
}

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) int clientPid;
@property (copy, nonatomic) NSArray *predicates;
@property (copy, nonatomic) RBSProcessStateDescriptor *stateDescriptor;
@property (nonatomic) unsigned int serviceClass;
@property (nonatomic) unsigned long long events;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ preventLaunchUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)matchedProcesses;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setPreventLaunchUpdateHandle:(id /* block */)a0;

@end
