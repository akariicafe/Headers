@protocol UIDropSession;

@interface _UIDragDestinationControllerSessionState : NSObject

@property (nonatomic) int state;
@property (retain, nonatomic) id<UIDropSession> dropSession;
@property (readonly, nonatomic) BOOL isReordering;
@property (readonly, nonatomic) BOOL isDragging;
@property (readonly, nonatomic) BOOL isActive;

- (id)description;
- (void).cxx_destruct;

@end
