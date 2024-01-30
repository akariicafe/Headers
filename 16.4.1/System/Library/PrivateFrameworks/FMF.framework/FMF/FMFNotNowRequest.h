@class NSString, NSSet, FMFHandle;

@interface FMFNotNowRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) FMFHandle *fromHandle;
@property (retain, nonatomic) NSSet *toHandles;

+ (id)notNowRequestToHandles:(id)a0 fromHandle:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFromHandle:(id)a0 toHandle:(id)a1 requestId:(id)a2;

@end
