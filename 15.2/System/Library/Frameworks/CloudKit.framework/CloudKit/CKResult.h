@class NSError;

@interface CKResult : NSObject

@property (readonly, nonatomic) id successValue;
@property (readonly, nonatomic) NSError *error;

- (id)initWithSuccess:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFailure:(id)a0;
- (unsigned long long)hash;

@end
