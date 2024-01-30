@class NSArray, NSString, CPLScopedIdentifier;

@interface CPLRecordTarget : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) long long targetState;
@property (readonly, nonatomic) BOOL shouldUploadToOtherRecord;
@property (readonly, nonatomic) CPLScopedIdentifier *otherScopedIdentifier;
@property (readonly, nonatomic) NSArray *targetScopedIdentifiers;
@property (readonly, nonatomic) CPLScopedIdentifier *resourceScopedIdentifier;
@property (readonly, nonatomic) NSString *simpleDescription;

+ (id)descriptionForTargetState:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithScopedIdentifier:(id)a0;
- (id)initWithScopedIdentifier:(id)a0 otherScopedIdentifier:(id)a1 targetState:(long long)a2;

@end
