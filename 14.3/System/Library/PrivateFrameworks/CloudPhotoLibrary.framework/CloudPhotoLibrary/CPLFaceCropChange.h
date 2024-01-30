@class NSString, NSData;

@interface CPLFaceCropChange : CPLRecordChange

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSData *resourceData;
@property (nonatomic) long long faceCropType;
@property (copy, nonatomic) NSString *rejectedPersonIdentifier;

- (BOOL)supportsDeletion;
- (void).cxx_destruct;
- (BOOL)supportsDirectDeletion;
- (id)propertiesDescription;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)a0;
- (BOOL)validateFullRecord;
- (BOOL)validateChangeWithError:(id *)a0;
- (id)personScopedIdentifier;
- (void)setPersonScopedIdentifier:(id)a0;

@end
