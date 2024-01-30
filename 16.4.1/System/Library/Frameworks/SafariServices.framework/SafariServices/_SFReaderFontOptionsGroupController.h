@class NSArray, NSString, NSMutableDictionary, NSObject;
@protocol SFReaderContext, OS_dispatch_queue;

@interface _SFReaderFontOptionsGroupController : NSObject <_SFSettingsAlertOptionsGroupController> {
    double _fontSize;
    NSMutableDictionary *_fontToItemDictionary;
    NSObject<OS_dispatch_queue> *_fontInstallationStatusQueue;
}

@property (readonly, nonatomic) id<SFReaderContext> readerContext;
@property (readonly, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_fontDownloadDidFinish:(id)a0;
- (void).cxx_destruct;
- (id)_attributedStringForReaderFont:(id)a0;
- (void)_fontDownloadProgressDidChange:(id)a0;
- (id)_downloadAccessoryForNotification:(id)a0;
- (void)_fontDownloadDidBegin:(id)a0;
- (void)_fontDownloadDidFail:(id)a0;
- (id)_fontForFontNotification:(id)a0;
- (BOOL)_fontIsImmediatelyAvailable:(id)a0;
- (id)_itemForNotification:(id)a0;
- (id)attributedStringForValue:(id)a0;
- (id)initWithReaderContext:(id)a0;
- (BOOL)isSelectedValue:(id)a0;
- (void)prepareItem:(id)a0 forValue:(id)a1;
- (void)setSelectedValue:(id)a0;
- (id)textStyleForValue:(id)a0;

@end
