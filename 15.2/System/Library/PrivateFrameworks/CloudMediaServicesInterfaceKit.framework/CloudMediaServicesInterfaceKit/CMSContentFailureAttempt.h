@class NSString, NSDate;

@interface CMSContentFailureAttempt : NSObject <CMSCoding>

@property (readonly, nonatomic) unsigned long long failure;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFailure:(unsigned long long)a0;
- (id)cmsCoded;

@end
