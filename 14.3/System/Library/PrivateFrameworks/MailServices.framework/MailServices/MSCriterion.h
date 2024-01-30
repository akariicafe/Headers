@class NSString;
@protocol NSObject;

@interface MSCriterion : NSObject <NSSecureCoding> {
    NSString *_type;
    NSString *_qualifier;
    id<NSObject> _criteria;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)criteria;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)type;
- (id)qualifier;
- (id)initWithType:(id)a0 qualifier:(id)a1 expression:(id)a2;
- (id)initWithCriteria:(id)a0 allRequired:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithType:(id)a0 qualifier:(id)a1 criteria:(id)a2;

@end
