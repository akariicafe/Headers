@class NSString, UITitlebar, NSToolbar, NSURL, NSMutableSet;

@interface _UINavigationBarNSToolbarProxy : NSObject {
    NSString *_title;
    NSURL *_representedURL;
    id /* block */ _representedDragItemsProvider;
    NSMutableSet *_registeredParticipants;
    struct { unsigned char needsUpdate : 1; unsigned char needsRefresh : 1; } _flags;
}

@property (class, readonly, nonatomic) BOOL _supportsNSToolbarNavigationHosting;

@property (readonly, weak, nonatomic) UITitlebar *owningTitlebar;
@property (readonly, nonatomic) NSToolbar *toolbar;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *representedURL;
@property (readonly, copy, nonatomic) id /* block */ representedDragItemsProvider;

- (void)setNeedsUpdate;
- (id)description;
- (void).cxx_destruct;
- (void)_updateIfNecessary;
- (id)initWithTitlebar:(id)a0;
- (void)registerToolbarParticipant:(id)a0;
- (void)unregisterToolbarParticipant:(id)a0;

@end
