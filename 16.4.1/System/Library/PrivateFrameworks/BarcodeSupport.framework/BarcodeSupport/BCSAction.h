@class NSString, CPSClipMetadataRequest, NSArray, NSURL, UIImage, NSDictionary, BCSActionPickerViewAssistant, BCSDetectedCode;
@protocol BCSParsedDataPrivate, BCSActionDelegate, BCSCodePayload;

@interface BCSAction : NSObject <BCSActionPrivate, BCSAction> {
    BCSActionPickerViewAssistant *_actionPickerViewAssistant;
}

@property (readonly, nonatomic) id<BCSParsedDataPrivate> data;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id<BCSCodePayload> codePayload;
@property (readonly, nonatomic) BOOL preferItemsInSubmenu;
@property (retain, nonatomic) BCSDetectedCode *detectedCode;
@property (readonly, nonatomic) NSArray *menuElements;
@property (readonly, nonatomic) unsigned long long menuElementsCount;
@property (readonly, nonatomic) id /* block */ menuProvider;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) UIImage *actionIcon;
@property (readonly, nonatomic) NSString *dataTypeDisplayString;
@property (readonly, nonatomic) NSString *contentPreviewString;
@property (readonly, nonatomic) long long payloadDataType;
@property (readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly, copy, nonatomic) NSArray *appLinks;
@property (readonly, nonatomic) BOOL isInvalidDataAction;
@property (readonly, nonatomic) BOOL isWiFiAction;
@property (readonly, nonatomic) long long codeType;
@property (readonly, nonatomic) BOOL shouldRequireUserToPickTargetApp;
@property (readonly, nonatomic) BOOL hasSensitiveURL;
@property (retain, nonatomic) CPSClipMetadataRequest *clipMetadataRequest;
@property (readonly, nonatomic) BOOL isAMSAction;
@property (readonly, nonatomic) BOOL isPasskeyAction;
@property (readonly, nonatomic) BOOL isPasskeyAssertionAction;
@property (readonly, nonatomic) BOOL isPasskeyRegistrationAction;
@property (readonly, nonatomic) BOOL isLiveCameraOnlyAction;
@property (weak, nonatomic) id<BCSActionDelegate> delegate;
@property (readonly, nonatomic) NSURL *urlThatCanBeOpened;
@property (readonly, copy, nonatomic) NSString *defaultActionTargetApplicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedDefaultActionTitle;
@property (readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
@property (readonly, copy, nonatomic) NSString *localizedActionDescription;
@property (readonly, copy, nonatomic) NSArray *actionPickerItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getActionWithData:(id)a0 codePayload:(id)a1 completionHandler:(id /* block */)a2;

- (long long)type;
- (void)performAction;
- (void).cxx_destruct;
- (void)performActionWithCompletion:(id /* block */)a0;
- (void)performDefaultAction;
- (id)_fallbackDataTypeDisplayString;
- (id)debugDescriptionExtraInfoDictionary;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)a0;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (void)performActionWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)showActionPicker;
- (id)subMenuWithMenuItems:(id)a0;

@end
