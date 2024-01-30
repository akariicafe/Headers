@class IKTextElement, NSString, IKImageElement;

@interface IKButtonElement : IKViewElement

@property (readonly, nonatomic) long long buttonType;
@property (readonly, retain, nonatomic) IKTextElement *text;
@property (readonly, copy, nonatomic) NSString *confirmationText;
@property (readonly, retain, nonatomic) IKImageElement *image;

@end
