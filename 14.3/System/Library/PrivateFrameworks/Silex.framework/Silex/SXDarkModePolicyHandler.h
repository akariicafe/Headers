@class NSString, NSMutableArray;
@protocol SXDocumentProviding, SXDarkModeConfiguration;

@interface SXDarkModePolicyHandler : NSObject <SXDarkModePolicyHandler>

@property (readonly, nonatomic) id<SXDarkModeConfiguration> darkModeConfiguration;
@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly, nonatomic) NSMutableArray *exceptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldApplyDarkModeToComponentStylesForComponent:(id)a0 DOM:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id)a0 component:(id)a1 DOM:(id)a2;
- (BOOL)shouldApplyDarkModeToComponentStyle:(id)a0 component:(id)a1 DOM:(id)a2;
- (BOOL)shouldApplyDarkModeToDocumentStyle:(id)a0 DOM:(id)a1;
- (BOOL)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id)a0 component:(id)a1 DOM:(id)a2;
- (BOOL)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)a0 DOM:(id)a1;
- (BOOL)shouldApplyDarkModeToDOM:(id)a0 layoutOptions:(id)a1;
- (void)addPolicyException:(id)a0;
- (id)initWithDocumentProvider:(id)a0 darkModeConfiguration:(id)a1;
- (BOOL)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id)a0 component:(id)a1 DOM:(id)a2;
- (BOOL)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id)a0 component:(id)a1 DOM:(id)a2;
- (BOOL)shouldApplyDarkModeToComponent:(id)a0 DOM:(id)a1;
- (BOOL)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)a0 DOM:(id)a1;

@end
