@class NSString, BSServiceConnectionEndpoint;

@interface FBSSceneIdentityToken : NSObject <BSXPCSecureCoding, BSXPCCoding, NSSecureCoding, NSCopying> {
    NSString *_workspace;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 workspace:(id)a1 endpoint:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
