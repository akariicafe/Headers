@class NSString;

@interface RBSAssertionIdentifier : NSObject <RBSXPCSecureCoding, NSCopying> {
    NSString *_desc;
    unsigned long long _hash;
}

@property (readonly, nonatomic) int serverPid;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierWithClientPid:(int)a0;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
