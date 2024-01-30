@class IKTextElement, IKImageElement;

@interface IKHeaderElement : IKViewElement

@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, retain, nonatomic) IKTextElement *descriptionText;
@property (readonly, retain, nonatomic) IKImageElement *image;
@property (readonly, nonatomic) long long separator;

@end
