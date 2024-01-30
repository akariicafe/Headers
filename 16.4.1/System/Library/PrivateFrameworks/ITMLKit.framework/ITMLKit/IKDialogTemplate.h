@class IKTextElement, NSArray;

@interface IKDialogTemplate : IKViewElement

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, retain, nonatomic) IKTextElement *descriptionText;
@property (readonly, retain, nonatomic) NSArray *buttons;

@end
