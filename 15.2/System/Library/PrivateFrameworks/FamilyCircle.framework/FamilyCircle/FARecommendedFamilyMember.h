@class NSString, CNContact;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) CNContact *contact;

- (void)encodeWithCoder:(id)a0;
- (id)_safeClasses;
- (id)initWithRecommendation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
