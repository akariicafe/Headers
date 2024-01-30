@class NSUUID;

@interface HMDMediaPropertyWriteRequest : HMDMediaPropertyRequest

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSUUID *identifier;

+ (id)requestWithProperty:(id)a0 mediaProfile:(id)a1;
+ (id)serializeWriteRequests:(id)a0;
+ (id)deserializeWriteRequests:(id)a0 mediaProfile:(id)a1;
+ (id)writeRequestWithProperty:(id)a0 value:(id)a1 mediaProfile:(id)a2;
+ (id)writeRequestWithProperty:(id)a0 value:(id)a1 mediaProfile:(id)a2 identifier:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(id)a0 value:(id)a1 mediaProfile:(id)a2 identifier:(id)a3;

@end
