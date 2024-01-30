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

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)identifierWithClientPid:(int)a0;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
