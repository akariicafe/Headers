@class NSMutableSet;
@protocol _UINavigationBarTitleRenamerDelegate;

@interface _UINavigationBarTitleRenamer : NSObject {
    struct { unsigned char allowsMultipleSessions : 1; } _flags;
}

@property (readonly, nonatomic) NSMutableSet *trackedSessions;
@property (weak, nonatomic) id<_UINavigationBarTitleRenamerDelegate> delegate;

+ (id)renameServer;

- (id)sessionWithIdentifier:(id)a0;
- (id)init;
- (void)endSession:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_sessionTextFieldDidEndEditing:(id)a0;
- (BOOL)_session:(id)a0 textFieldShouldEndRenamingWithTitle:(id)a1;
- (id)_session:(id)a0 textFieldWillBeginRenamingWithTitle:(id)a1 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)_sessionDidCancel:(id)a0;
- (void)startSession:(id)a0;

@end
