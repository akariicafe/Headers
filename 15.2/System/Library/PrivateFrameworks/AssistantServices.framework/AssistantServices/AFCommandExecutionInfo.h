@class NSUUID, NSString, AFSpeechInfo, AFHomeInfo, AFInstanceInfo, NSArray, AFEndpointInfo, AFPeerInfo, NSDictionary, AFRequestHandlingContext;

@interface AFCommandExecutionInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *executionID;
@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, copy, nonatomic) NSUUID *turnId;
@property (readonly, copy, nonatomic) AFPeerInfo *originPeerInfo;
@property (readonly, copy, nonatomic) AFHomeInfo *currentHomeInfo;
@property (readonly, copy, nonatomic) AFEndpointInfo *endpointInfo;
@property (readonly, copy, nonatomic) AFInstanceInfo *instanceInfo;
@property (readonly, copy, nonatomic) AFSpeechInfo *speechInfo;
@property (readonly, copy, nonatomic) AFRequestHandlingContext *requestHandlingContextSnapshot;
@property (readonly, copy, nonatomic) NSArray *deviceRestrictions;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExecutionID:(id)a0 requestID:(id)a1 turnId:(id)a2 originPeerInfo:(id)a3 currentHomeInfo:(id)a4 endpointInfo:(id)a5 instanceInfo:(id)a6 speechInfo:(id)a7 requestHandlingContextSnapshot:(id)a8 deviceRestrictions:(id)a9 userInfo:(id)a10;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
