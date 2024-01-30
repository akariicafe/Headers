@class NSString;

@interface PHAMergeCandidatePair : NSObject {
    unsigned long long _hash;
}

@property (readonly) NSString *person1LocalIdentifier;
@property (readonly) NSString *person2LocalIdentifier;
@property (readonly) NSString *reason;

+ (id)mergeCandidatePairWithPerson:(id)a0 andPerson:(id)a1 reason:(id)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPerson:(id)a0 andPerson:(id)a1 reason:(id)a2;

@end
