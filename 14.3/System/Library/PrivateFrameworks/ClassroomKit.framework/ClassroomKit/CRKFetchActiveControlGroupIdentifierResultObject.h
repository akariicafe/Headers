@class DMFControlGroupIdentifier;

@interface CRKFetchActiveControlGroupIdentifierResultObject : CATTaskResultObject

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
