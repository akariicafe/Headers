@class NSString;

@interface CKTriple : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ value;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *predicate;
@property (nonatomic, readonly) NSString *object;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSubject:(id)a0 predicate:(id)a1 object:(id)a2 weight:(long long)a3;

@end
