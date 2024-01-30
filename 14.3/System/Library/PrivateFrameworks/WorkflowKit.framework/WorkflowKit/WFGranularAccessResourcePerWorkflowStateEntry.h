@class NSString, NSNumber;
@protocol NSSecureCoding, NSObject;

@interface WFGranularAccessResourcePerWorkflowStateEntry : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) Class valueTypeClass;
@property (class, readonly, nonatomic) NSString *valueKey;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<NSObject, NSSecureCoding> value;
@property (readonly, nonatomic) NSNumber *authorized;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0 authorized:(id)a1;
- (id)entryBySettingAuthorized:(BOOL)a0;

@end
