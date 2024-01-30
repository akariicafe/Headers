@protocol UIDragSession;

@interface _UICollectionViewDragSourceControllerSessionState : NSObject

@property (retain, nonatomic) id<UIDragSession> dragSession;
@property (readonly, nonatomic) BOOL isActive;

- (void).cxx_destruct;
- (id)description;

@end
