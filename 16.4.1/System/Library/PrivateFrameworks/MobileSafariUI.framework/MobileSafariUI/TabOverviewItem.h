@class NSString, NSUUID, UIImage, NSArray, TabOverview, TabOverviewItemLayoutInfo;

@interface TabOverviewItem : NSObject <TabCollectionItem> {
    BOOL _closing;
    BOOL _incoming;
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
@property (nonatomic, getter=isUnread) BOOL unread;
@property (copy, nonatomic) NSArray *shareParticipants;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) long long tintStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
