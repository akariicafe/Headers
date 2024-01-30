@class NSArray, NSString, UITextRange, NSAttributedString;

@interface _UITextDraggableGeometrySameViewDropOperation : NSObject <UITextDraggableGeometrySameViewDropOperation>

@property (retain, nonatomic) NSArray *sourceRanges;
@property (retain, nonatomic) UITextRange *targetRange;
@property (retain, nonatomic) NSAttributedString *text;
@property (nonatomic) unsigned long long operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
