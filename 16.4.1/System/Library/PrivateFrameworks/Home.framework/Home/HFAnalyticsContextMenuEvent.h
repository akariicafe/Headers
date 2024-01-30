@class NSString;

@interface HFAnalyticsContextMenuEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSString *sourceViewControllerClassName;
@property (retain, nonatomic) NSString *contextType;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *contextMenuTitle;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
