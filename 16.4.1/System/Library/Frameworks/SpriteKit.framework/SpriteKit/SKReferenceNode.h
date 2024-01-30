@class NSString, NSURL, SKNode;

@interface SKReferenceNode : SKNode {
    NSURL *_referenceURL;
    NSString *_referenceFileName;
    SKNode *_resolvedNode;
    BOOL _hasResolvedURL;
}

@property (retain, nonatomic) NSString *referenceFileName;
@property (retain, nonatomic) NSURL *referenceURL;

+ (BOOL)supportsSecureCoding;
+ (id)nodeWithFileNamed:(id)a0;
+ (id)referenceNodeWithFileNamed:(id)a0;
+ (id)referenceNodeWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)resolvedNode;
- (id)_resolveReferenceNode;
- (void)didLoadReferenceNode:(id)a0;
- (id)initWithFileNamed:(id)a0;
- (void)resolveNodeFromArchiveData:(id)a0;
- (void)resolveReferenceNode;

@end
