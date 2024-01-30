@class _UINavigationBarTitleRenamer, NSString, NSUUID, LPLinkMetadata, UIView;
@protocol _UINavigationBarTitleRenamerContentView;

@interface _UINavigationBarTitleRenamerSession : NSObject

@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, weak, nonatomic) _UINavigationBarTitleRenamer *attachedRenamer;
@property (readonly, nonatomic) LPLinkMetadata *iconMetadata;
@property (weak, nonatomic) id context;
@property (readonly, nonatomic) UIView<_UINavigationBarTitleRenamerContentView> *renamerContentView;

+ (BOOL)supportsSecureCoding;

- (void)sessionDidEnd;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_sanitizedTitleForText:(id)a0;
- (void)_textFieldDidEndEditingWithText:(id)a0;
- (BOOL)_textFieldShouldEndEditingWithText:(id)a0;
- (id)_willBeginRenamingWithText:(id)a0 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)cancelSession;
- (id)createRenamerContentView;
- (id)existingRenamerContentView;
- (id)initWithSuggestedTitle:(id)a0;
- (id)initWithSuggestedTitle:(id)a0 iconMetadata:(id)a1;
- (void)sessionDidStartInRenamer:(id)a0;

@end
