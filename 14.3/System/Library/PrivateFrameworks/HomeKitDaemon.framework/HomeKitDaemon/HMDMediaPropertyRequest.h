@class NSString, HMDMediaProfile;

@interface HMDMediaPropertyRequest : HMFObject

@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) HMDMediaProfile *mediaProfile;
@property (readonly, nonatomic) id previousValue;

+ (id)requestWithProperty:(id)a0 mediaProfile:(id)a1;
+ (id)serializeReadRequests:(id)a0;
+ (id)deserializeReadRequests:(id)a0 mediaProfile:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(id)a0 mediaProfile:(id)a1;

@end
