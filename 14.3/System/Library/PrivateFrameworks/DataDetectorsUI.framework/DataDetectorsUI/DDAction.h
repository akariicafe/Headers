@class NSString, UIImage, NSURL, NSDictionary, CNContact, NSObject, UIViewController;
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

@property (retain) CNContact *contact;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIImage *icon;
@property (nonatomic) BOOL isDefaultAction;
@property (nonatomic) int hostApplication;
@property (weak, nonatomic) NSObject<DDActionDelegate> *delegate;
@property (nonatomic) BOOL companion;
@property (readonly, weak, nonatomic) DDAction *companionAction;

+ (id)clientActionsDelegate;
+ (void)setClientActionsDelegate:(id)a0;
+ (BOOL)isAvailable;
+ (BOOL)actionAvailableForContact:(id)a0;
+ (id)encodableContextWithContext:(id)a0;
+ (id)actionWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
+ (id)actionsWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
+ (id)contextByAddingValue:(id)a0 toKey:(id)a1 inContext:(id)a2;
+ (id)defaultActionWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;

- (void)perform;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)result;
- (id)context;
- (void).cxx_destruct;
- (BOOL)hasUserInterface;
- (void)dealloc;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (int)interactionType;
- (id)generateIdentifier;
- (id)url;
- (id)description;
- (id)notificationTitle;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
- (const struct __CFArray { } *)associatedResults;
- (void)performFromView:(id)a0;
- (void)prepareViewControllerForActionController:(id)a0;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (void)addToRecents;
- (void)setupPopoverPresentationController:(id)a0 view:(id)a1;
- (BOOL)canBePerformedWhenDeviceIsLocked;
- (BOOL)canBePerformedByOpeningURL;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)coalescedResult;
- (void)_performFromView:(id)a0 byOpeningURL:(id)a1 disableAppLink:(BOOL)a2;
- (void)_copyURL:(id)a0 andString:(id)a1;
- (void)_performFromView:(id)a0 byOpeningURL:(id)a1;
- (void)_copyStringOnly:(id)a0;
- (void)_copyURL:(id)a0;
- (id)localizedSubItemName;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;
- (id)displayNameForEmails:(id)a0 phoneNumbers:(id)a1;

@end
