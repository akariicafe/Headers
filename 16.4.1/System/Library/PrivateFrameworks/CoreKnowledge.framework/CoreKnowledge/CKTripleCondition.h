@class NSString;

@interface CKTripleCondition : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ rawCondition;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

+ (id)havingPredicate:(id)a0 matchType:(long long)a1 error:(id *)a2;
+ (id)havingSubject:(id)a0 andAbject:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(BOOL)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)or:(id)a0;
- (id)and:(id)a0;
- (BOOL)evaluateOn:(id)a0;
- (id)initWithSubject:(id)a0 predicate:(id)a1 object:(id)a2;

@end
