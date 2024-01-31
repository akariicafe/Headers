@class NSString;

@interface CLSProgressReportingCapability : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *details;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithKind:(long long)a0 details:(id)a1;

@end
