@class NSString, NSDictionary, NSURL, NSArray, CPSClipMetadataRequest, BCSActionPickerViewAssistant;
@protocol BCSParsedDataPrivate, BCSActionDelegate, BCSCodePayload;

@interface BCSAction : NSObject <BCSActionPrivate> {
    BCSActionPickerViewAssistant *_actionPickerViewAssistant;
}

@property (readonly, nonatomic) id<BCSParsedDataPrivate> data;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id<BCSCodePayload> codePayload;
@property (readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly, copy, nonatomic) NSArray *appLinks;
@property (readonly, nonatomic) BOOL isInvalidDataAction;
@property (readonly, nonatomic) BOOL isWiFiAction;
@property (readonly, nonatomic) long long codeType;
@property (retain, nonatomic) CPSClipMetadataRequest *clipMetadataRequest;
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

- (void)performAction;
- (void).cxx_destruct;
- (long long)type;
- (void)performDefaultAction;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)a0;
- (id)debugDescriptionExtraInfoDictionary;
- (void)showActionPicker;

@end
