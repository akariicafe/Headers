@class UIContextMenuInteraction, NSUUID, NSString, SBIconView;

@interface SBIconViewContextMenuContext : NSObject <NSCopying> {
    NSString *_nodeIdentifier;
}

@property (weak, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, weak, nonatomic) SBIconView *iconView;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *presentedWidgetBundleIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIconView:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (id)contextMenuNotificationUserInfo;

@end
