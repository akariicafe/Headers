@class UIContextMenuInteraction, NSUUID, NSString, SBIconView;

@interface SBIconViewContextMenuContext : NSObject <NSCopying> {
    NSString *_nodeIdentifier;
}

@property (weak, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, weak, nonatomic) SBIconView *iconView;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, copy, nonatomic) NSUUID *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)contextMenuNotificationUserInfo;
- (id)initWithIconView:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;

@end
