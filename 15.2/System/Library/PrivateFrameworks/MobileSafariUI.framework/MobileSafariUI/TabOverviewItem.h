@class NSString, NSUUID, UIImage, TabOverview, TabOverviewItemLayoutInfo;

@interface TabOverviewItem : NSObject <TabCollectionItem> {
    BOOL _closing;
    BOOL _isAlternateItem;
    TabOverviewItemLayoutInfo *_layoutInfo;
    TabOverview *_tabOverview;
    TabOverviewItemLayoutInfo *_dropPreviewLayoutInfo;
}

@property (nonatomic) BOOL isPlaceholder;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) long long dragState;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) long long tintStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
