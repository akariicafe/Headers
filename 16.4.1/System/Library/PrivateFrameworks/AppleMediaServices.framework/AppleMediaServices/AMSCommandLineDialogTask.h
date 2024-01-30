@class AMSDialogRequest;

@interface AMSCommandLineDialogTask : AMSTask

@property (readonly, nonatomic) AMSDialogRequest *request;
@property (nonatomic) double maximumDialogWidth;
@property (nonatomic) double minimumDialogWidth;
@property (nonatomic) double dialogPadding;
@property (nonatomic) long long automaticButtonSelection;

- (id)initWithRequest:(id)a0;
- (id)present;
- (void).cxx_destruct;
- (id)_createHorizontolLineWithWidth:(long long)a0;
- (id)_createLinesFromText:(id)a0 width:(long long)a1;
- (id)_createText:(id)a0 width:(long long)a1 centered:(BOOL)a2 omitLeftPipe:(BOOL)a3;
- (id)_createTextfieldWithTextfield:(id)a0 width:(long long)a1;
- (long long)_gatherButtonInput;
- (id)_gatherTextfieldInput;
- (id)_getUserInput;
- (void)_printMessage:(id)a0;

@end
