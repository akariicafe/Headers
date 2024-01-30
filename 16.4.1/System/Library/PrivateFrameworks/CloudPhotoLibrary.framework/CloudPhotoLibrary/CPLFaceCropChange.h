@class NSString, NSData;

@interface CPLFaceCropChange : CPLRecordChange

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSData *resourceData;
@property (nonatomic) long long faceCropType;
@property (copy, nonatomic) NSString *rejectedPersonIdentifier;

+ (BOOL)supportsDirectDeletion;
+ (BOOL)supportsDeletion;
+ (Class)relatedRecordClass;

- (void).cxx_destruct;
- (id)personScopedIdentifier;
- (id)propertiesDescription;
- (id)relatedIdentifier;
- (void)setPersonScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (BOOL)validateChangeWithError:(id *)a0;
- (BOOL)validateFullRecord;

@end
