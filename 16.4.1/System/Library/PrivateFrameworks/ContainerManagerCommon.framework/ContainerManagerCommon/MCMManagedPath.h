@class MCMFSNode, NSString, NSURL, MCMPOSIXUser;
@protocol MCMManagedPath;

@interface MCMManagedPath : NSObject <MCMManagedPath>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) id<MCMManagedPath> parent;
@property (readonly, nonatomic) unsigned short mode;
@property (readonly, nonatomic) int dpClass;
@property (readonly, nonatomic) unsigned long long ACLConfig;
@property (readonly, nonatomic) MCMPOSIXUser *owner;
@property (retain, nonatomic) MCMFSNode *fsNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)managedPathByAppendingPathComponent:(id)a0 flags:(unsigned long long)a1 ACLConfig:(unsigned long long)a2 mode:(unsigned short)a3 dpClass:(int)a4 owner:(id)a5;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 flags:(unsigned long long)a1 ACLConfig:(unsigned long long)a2 mode:(unsigned short)a3 dpClass:(int)a4 owner:(id)a5 parent:(id)a6;
- (BOOL)isEqualToManagedPath:(id)a0;
- (void).cxx_destruct;

@end
