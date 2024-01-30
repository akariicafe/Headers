@class NSArray, UITextRange, NSString;
@protocol UIDragSession;

@interface UITextDragRequest : NSObject <UITextDragRequest>

@property (retain, nonatomic) NSArray *suggestedItems;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) UITextRange *dragRange;
@property (readonly, nonatomic) NSArray *existingItems;
@property (readonly, nonatomic) id<UIDragSession> dragSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRange:(id)a0 inSession:(id)a1;

@end
