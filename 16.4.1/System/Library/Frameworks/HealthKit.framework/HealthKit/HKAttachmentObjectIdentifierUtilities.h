@interface HKAttachmentObjectIdentifierUtilities : NSObject

+ (id)_attachmentObjectIdentifierWithSampleTypeIdentifier:(id)a0 bundleIdentifier:(id)a1 FHIRResourceType:(id)a2 FHIRResourceIdentifier:(id)a3;
+ (id)attachmentObjectIdentifierForClinicalRecord:(id)a0;
+ (id)attachmentObjectIdentifierForMedicalRecord:(id)a0;
+ (BOOL)componentsFromAttachmentObjectIdentifier:(id)a0 sampleTypeIdentifier:(id *)a1 bundleIdentifier:(id *)a2 FHIRIdentifier:(id *)a3;

@end
