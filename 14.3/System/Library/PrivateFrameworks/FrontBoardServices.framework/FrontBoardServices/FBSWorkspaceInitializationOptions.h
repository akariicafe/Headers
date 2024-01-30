@class FBSSerialQueue;
@protocol FBSWorkspaceDelegate;

@interface FBSWorkspaceInitializationOptions : NSObject

@property (nonatomic, setter=_setStartsInactive:) BOOL _startsInactive;
@property (readonly, nonatomic) id<FBSWorkspaceDelegate> delegate;
@property (retain, nonatomic) FBSSerialQueue *callOutQueue;

+ (id)optionsWithDelegate:(id)a0;

- (id)_initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
