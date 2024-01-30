@class IKViewElement, NSDate;

@interface IKTimelineEventElement : IKViewElement

@property (readonly, nonatomic) double offset;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double duration;
@property (readonly, retain, nonatomic) IKViewElement *relatedContent;

@end
