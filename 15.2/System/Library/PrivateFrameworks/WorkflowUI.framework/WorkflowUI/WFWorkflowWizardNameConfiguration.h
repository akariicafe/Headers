@class NSString;

@interface WFWorkflowWizardNameConfiguration : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) BOOL showsHeySiri;
@property (nonatomic) BOOL showsSuggestions;
@property (copy, nonatomic) NSString *doneBarButtonTitle;

+ (id)newWorkflowConfiguration;
+ (id)addToSiriConfiguration;
+ (id)tellSiriInfoText;

- (void).cxx_destruct;
- (id)init;

@end
