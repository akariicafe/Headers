@class NSArray, IKViewElement;

@interface IKMediaElement : IKViewElement

@property (readonly, retain, nonatomic) NSArray *assets;
@property (readonly, nonatomic) unsigned long long scrubBehavior;
@property (readonly, nonatomic) IKViewElement *relatedContent;

@end
