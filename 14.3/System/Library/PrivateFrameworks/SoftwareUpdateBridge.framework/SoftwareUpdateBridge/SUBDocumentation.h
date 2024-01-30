@class NSString, NSArray, NSURL, NSData;

@interface SUBDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *documentationBundleURL;
@property (retain, nonatomic) NSData *releaseNotesSummary;
@property (retain, nonatomic) NSData *releaseNotes;
@property (retain, nonatomic) NSData *licenseAgreement;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (readonly, retain, nonatomic) NSString *currentPhoneLanguage;
@property (retain, nonatomic) NSString *phoneLanguage;
@property (readonly, retain, nonatomic) NSArray *preferredPhoneLanguages;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_loadBundleResources;
- (id)_resourceFromBundle:(id)a0 forKey:(id)a1;
- (id)initWithDocumentationBundleURL:(id)a0;

@end
