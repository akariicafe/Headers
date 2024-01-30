@class UIView, NSString, UIImage, NSURL, CNContact, NSDictionary, NSObject, UIViewController;
@protocol DDActionDelegate;

@interface DDAction : NSObject <NSCoding, NSSecureCoding> {
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *_result;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *_coalescedResult;
    struct __CFArray { } *_associatedResults;
    NSString *_ics;
    NSDictionary *_context;
    NSURL *_url;
    BOOL _cachedCoalescedResult;
    BOOL _cachedAssociatedResults;
    BOOL _hasCompanion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL treatAsMenu;
@property (retain) CNContact *contact;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIImage *compactIcon;
@property (readonly, nonatomic) NSString *compactTitle;
@property (readonly, nonatomic) NSString *quickActionTitle;
@property (readonly, nonatomic) BOOL isPlaceholderAction;
@property (nonatomic) BOOL isDefaultAction;
@property (nonatomic) int hostApplication;
@property (weak, nonatomic) NSObject<DDActionDelegate> *delegate;
@property (nonatomic) BOOL companion;
@property (readonly, weak, nonatomic) DDAction *companionAction;
@property (weak, nonatomic) UIView *fallBackView;

+ (BOOL)isAvailable;
+ (id)clientActionsDelegate;
+ (void)setClientActionsDelegate:(id)a0;
+ (BOOL)actionAvailableForContact:(id)a0;
+ (id)actionWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
+ (id)actionsWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
+ (id)contextByAddingValue:(id)a0 toKey:(id)a1 inContext:(id)a2;
+ (id)defaultActionWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
+ (id)encodableContextWithContext:(id)a0;
+ (id)matchingScheme;

- (void)encodeWithCoder:(id)a0;
- (int)interactionType;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)result;
- (id)localizedName;
- (id)generateIdentifier;
- (id)initWithCoder:(id)a0;
- (id)subtitle;
- (id)url;
- (void)perform;
- (const struct __CFArray { } *)associatedResults;
- (id)context;
- (void)dealloc;
- (id)notificationURL;
- (id)description;
- (void)invalidate;
- (id)iconName;
- (void).cxx_destruct;
- (BOOL)hasUserInterface;
- (id)notificationTitle;
- (id)variantIconName;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)coalescedResult;
- (void)_openURL:(id)a0 fromView:(id)a1 options:(id)a2;
- (void)_openURL:(id)a0 options:(id)a1 fallbackURL:(id)a2;
- (void)_performFromView:(id)a0 byOpeningURL:(id)a1;
- (void)_performFromView:(id)a0 byOpeningURL:(id)a1 disableAppLink:(BOOL)a2;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (void)addToRecents;
- (BOOL)ambiguousIcon;
- (BOOL)canBePerformedByOpeningURL;
- (BOOL)canBePerformedWhenDeviceIsLocked;
- (id)displayNameForEmails:(id)a0 phoneNumbers:(id)a1;
- (id)feedbackIdentifier;
- (unsigned long long)groupDisplayOption;
- (id)initWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
- (id)localizedSubItemName;
- (id)localizedSubItemName:(BOOL)a0;
- (id)menuIcon;
- (unsigned long long)menuItemattributes;
- (id)menuName;
- (id)notificationIconBundleIdentifier;
- (id)oneLinerLocalizedSubItemName;
- (void)performFromView:(id)a0;
- (void)prepareViewControllerForActionController:(id)a0;
- (void)setupPopoverPresentationController:(id)a0 view:(id)a1;
- (void)updateSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
