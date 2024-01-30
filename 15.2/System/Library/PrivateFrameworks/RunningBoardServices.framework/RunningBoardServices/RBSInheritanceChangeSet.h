@class NSSet, NSString;

@interface RBSInheritanceChangeSet : NSObject <RBSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSSet *gainedInheritances;
@property (readonly, copy, nonatomic) NSSet *lostInheritances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithGainedInheritances:(id)a0 lostInheritances:(id)a1;

@end
