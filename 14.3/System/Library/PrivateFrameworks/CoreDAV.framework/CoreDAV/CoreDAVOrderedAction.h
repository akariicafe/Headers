@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction

@property (readonly, nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSURL *priorURL;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAction:(int)a0 context:(id)a1 absoluteOrder:(int)a2;

@end
