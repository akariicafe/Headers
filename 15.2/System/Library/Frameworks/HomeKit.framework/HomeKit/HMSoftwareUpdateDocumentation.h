@class HMHTMLDocument, HMPlainTextDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMHTMLDocument *releaseNotesSummary;
@property (readonly, copy) HMHTMLDocument *releaseNotes;
@property (readonly, copy) HMPlainTextDocument *textReleaseNotes;
@property (readonly, copy) HMHTMLDocument *licenseAgreement;
@property (readonly, copy) NSNumber *licenseAgreementVersion;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithReleaseNotesSummary:(id)a0 releaseNotes:(id)a1 textReleaseNotes:(id)a2 licenseAgreement:(id)a3 licenseAgreementVersion:(id)a4;

@end
