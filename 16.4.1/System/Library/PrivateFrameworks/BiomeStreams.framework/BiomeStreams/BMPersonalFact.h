@class NSString, NSArray;

@interface BMPersonalFact : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *subjectId;
@property (readonly, nonatomic) NSString *subjectAlias;
@property (readonly, nonatomic) NSArray *subjectIsa;
@property (readonly, nonatomic) NSString *predicateId;
@property (readonly, nonatomic) NSString *objectId;
@property (readonly, nonatomic) NSString *objectAlias;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubjectId:(id)a0 subjectAlias:(id)a1 subjectIsa:(id)a2 predicateId:(id)a3 objectId:(id)a4 objectAlias:(id)a5;

@end
