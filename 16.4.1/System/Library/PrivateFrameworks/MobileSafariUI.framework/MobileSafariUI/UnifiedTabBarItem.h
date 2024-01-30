@class NSString, NSUUID;

@interface UnifiedTabBarItem : SFUnifiedTabBarItem <TabCollectionItem> {
    UnifiedTabBarItem *_secondaryItem;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long mediaStateIcon;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (nonatomic) long long dragState;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDropping;
- (BOOL)isDragging;
- (void)setIsPlaceholder:(BOOL)a0;
- (void)_updateHidden;
- (void)setPinned:(BOOL)a0;
- (void)setUUID:(id)a0;
- (void)setIcon:(id)a0;
- (id)secondaryItem;
- (void)setMediaStateIcon:(unsigned long long)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;

@end
