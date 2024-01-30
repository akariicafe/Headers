@class NSArray;

@interface PKFieldMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *associatedPassIdentifiers;
@property (readonly, nonatomic) BOOL shouldIgnoreField;
@property (readonly, nonatomic) BOOL foundExplicitlyRequestedPass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAssociatedPassIdentifiers:(id)a0 shouldIgnoreField:(BOOL)a1 foundExplicitlyRequestedPass:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
