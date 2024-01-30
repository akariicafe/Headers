@class NSString, LSApplicationProxy;

@interface _SFOpenWithAppUIActivity : UIActivity <LSOpenResourceOperationDelegate> {
    LSApplicationProxy *_appProxy;
    NSString *_filePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (void)openResourceOperation:(id)a0 didFinishCopyingResource:(id)a1;
- (void).cxx_destruct;
- (id)_activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithApplicationIdentifier:(id)a0 andFilePath:(id)a1;

@end
