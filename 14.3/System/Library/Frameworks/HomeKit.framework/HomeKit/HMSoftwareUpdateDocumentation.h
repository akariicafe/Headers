@class HMHTMLDocument, HMPlainTextDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMHTMLDocument *releaseNotesSummary;
@property (readonly, copy) HMHTMLDocument *releaseNotes;
@property (readonly, copy) HMPlainTextDocument *textReleaseNotes;
@property (readonly, copy) HMHTMLDocument *licenseAgreement;
@property (readonly, copy) NSNumber *licenseAgreementVersion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReleaseNotesSummary:(id)a0 releaseNotes:(id)a1 textReleaseNotes:(id)a2 licenseAgreement:(id)a3 licenseAgreementVersion:(id)a4;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
