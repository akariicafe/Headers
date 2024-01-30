@class RBSProcessStateDescriptor, NSArray, NSString, RBSProcessHandle;

@interface RBSProcessMonitorConfiguration : NSObject <RBSProcessMonitorConfiguring, NSCopying, RBSXPCSecureCoding> {
    RBSProcessHandle *_lastMatch;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_desc;
    int _clientPid;
    id /* block */ _preventLaunchUpdateHandler;
}

@property (readonly, nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSArray *predicates;
@property (copy, nonatomic) RBSProcessStateDescriptor *stateDescriptor;
@property (nonatomic) unsigned int serviceClass;
@property (nonatomic) unsigned long long events;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)setPreventLaunchUpdateHandle:(id /* block */)a0;
- (BOOL)matchesProcess:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
