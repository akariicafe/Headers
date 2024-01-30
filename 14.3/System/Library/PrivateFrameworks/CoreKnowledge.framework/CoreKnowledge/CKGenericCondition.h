@class NSPredicate, NSString;

@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ negated;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sql;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *description;

- (id)or:(id)a0;
- (id)and:(id)a0;
- (id)initWithMatchType:(long long)a0 value:(id)a1 negated:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (BOOL)evaluateOn:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
