@class NSString, NSMutableDictionary, NSURL, NSNumber;

@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_cachedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *baseDocumentationURL;
@property (retain, nonatomic) NSString *releaseNotesSummaryFileName;
@property (retain, nonatomic) NSString *licenseAgreementFileName;
@property (retain, nonatomic) NSString *releaseNotesFileName;
@property (retain, nonatomic) NSString *primaryLanguage;
@property (retain, nonatomic) NSNumber *slaVersion;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSURL *releaseNotesSummaryURL;
@property (retain, nonatomic) NSURL *releaseNotesURL;
@property (retain, nonatomic) NSURL *licenseAgreementURL;
@property (retain, nonatomic) NSString *iconImageName;

- (id)iconImage;
- (id)licenseAgreement;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)releaseNotes;
- (id)releaseNotesSummary;
- (void)_resetIfNecessary;
- (id)_cachedDocumentationDataForURL:(id)a0;
- (id)_localizedResourceURLForDocumentationAsset:(id)a0 resource:(id)a1;
- (id)localizedDocumentationStringFromBundle:(struct __CFBundle { } *)a0 key:(id)a1;
- (void)_clearTransientDocumentationData;
- (id)localizedStringFromBundle:(struct __CFBundle { } *)a0 key:(id)a1;
- (id)localizedURLFromBundle:(struct __CFBundle { } *)a0 resource:(id)a1;
- (id)_getSUImage:(id)a0;
- (id)pngImageDataFromBundle:(struct __CFBundle { } *)a0 fileName:(id)a1;
- (id)initWithDocumentationURL:(id)a0;
- (BOOL)hasAnyDocumentation;
- (id)getIconImage;
- (id)getFullWidthImage;

@end
