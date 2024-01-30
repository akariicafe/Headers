@class NSString;

@interface HMSymptom : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly, copy) NSString *localizedTitle;

+ (id)archive:(id)a0;
+ (id)unarchive:(id)a0;
+ (id)symptomWithType:(long long)a0;
+ (id)unarchiveSymptomDict:(id)a0;
+ (id)archiveSymptomDict:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
