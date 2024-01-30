@class NSString, NSMutableSet;

@interface _SBIconListModelTransaction : NSObject {
    NSMutableSet *_addedNodeIdentifiers;
    NSMutableSet *_deletedNodeIdentifiers;
}

@property (readonly, copy, nonatomic) NSString *requestID;

- (id)initWithRequestID:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)commitChangesToObservers:(id)a0 forNode:(id)a1;
- (void)removeNodeIdentifiers:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)addNodeIdentifiers:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
