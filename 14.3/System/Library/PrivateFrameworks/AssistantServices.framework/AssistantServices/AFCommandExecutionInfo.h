@class NSString, AFPeerInfo, NSDictionary;

@interface AFCommandExecutionInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *executionID;
@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, copy, nonatomic) AFPeerInfo *originPeerInfo;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithExecutionID:(id)a0 requestID:(id)a1 originPeerInfo:(id)a2 userInfo:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
