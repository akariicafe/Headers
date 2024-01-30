@class NSArray;

@interface CLSRole : CLSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *privileges;
@property (nonatomic) long long sourceType;
@property BOOL isEditable;

+ (BOOL)supportsSecureCoding;
+ (id)stringForRoleType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
