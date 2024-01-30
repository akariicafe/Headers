@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction

@property (readonly, nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSURL *priorURL;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAction:(int)a0 context:(id)a1 absoluteOrder:(int)a2;

@end
