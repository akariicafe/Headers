@class IKTextElement, NSArray, NSURL;

@interface IKTimelineElement : IKViewElement

@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, retain, nonatomic) NSArray *events;
@property (readonly, nonatomic) unsigned long long timelineType;
@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) double refreshInterval;

@end
