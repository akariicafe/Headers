@class NSString, NSData;

@interface WFShareSheetSafariWebPage : WFSafariWebPage {
    NSString *_selectionText;
    NSData *_selectionHTML;
}

@property (readonly, copy, nonatomic) NSString *javaScriptRunnerIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)webPageFromPreprocessingResult:(id)a0 javaScriptRunnerIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)selectionText;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 pageTitle:(id)a1 selectionText:(id)a2 selectionHTML:(id)a3 documentHTML:(id)a4 javaScriptRunnerIdentifier:(id)a5;
- (id)selectionHTML;

@end
