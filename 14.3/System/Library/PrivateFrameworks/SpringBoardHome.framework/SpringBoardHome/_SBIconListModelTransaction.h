@class NSString, NSMutableSet;

@interface _SBIconListModelTransaction : NSObject {
    NSMutableSet *_addedNodeIdentifiers;
    NSMutableSet *_deletedNodeIdentifiers;
}

@property (readonly, copy, nonatomic) NSString *requestID;

- (id)initWithRequestID:(id)a0;
- (void).cxx_destruct;
- (void)addNodeIdentifiers:(id)a0;
- (void)removeNodeIdentifiers:(id)a0;
- (void)commitChangesToObservers:(id)a0 forNode:(id)a1;

@end
