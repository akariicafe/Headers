@class NSUUID, UITextRange;
@protocol NSObject;

@interface UIAccessibilityCustomRotorItemResult : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) id<NSObject> targetElement;
@property (retain, nonatomic) UITextRange *targetRange;

- (id)initWithTargetElement:(id)a0 targetRange:(id)a1;
- (void).cxx_destruct;

@end
