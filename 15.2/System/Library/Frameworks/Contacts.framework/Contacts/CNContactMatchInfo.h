@class NSSet, NSDictionary, CNPromise, NSNumber;

@interface CNContactMatchInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL matchedNameProperty;
@property (copy, nonatomic) NSNumber *relevanceScore;
@property (copy, nonatomic) NSDictionary *matchedProperties;
@property (retain, nonatomic) NSSet *matchedTerms;
@property (retain, nonatomic) CNPromise *excerpt;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
