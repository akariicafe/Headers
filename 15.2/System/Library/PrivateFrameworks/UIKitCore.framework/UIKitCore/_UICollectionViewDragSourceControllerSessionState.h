@protocol UIDragSession;

@interface _UICollectionViewDragSourceControllerSessionState : NSObject

@property (retain, nonatomic) id<UIDragSession> dragSession;
@property (readonly, nonatomic) BOOL isActive;

- (id)description;
- (void).cxx_destruct;

@end
