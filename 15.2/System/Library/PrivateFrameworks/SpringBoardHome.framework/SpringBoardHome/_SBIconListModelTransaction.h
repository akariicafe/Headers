@class NSString, NSMutableSet;

@interface _SBIconListModelTransaction : NSObject {
    NSMutableSet *_addedNodeIdentifiers;
    NSMutableSet *_deletedNodeIdentifiers;
}

@property (readonly, copy, nonatomic) NSString *requestID;

- (id)initWithRequestID:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)addNodeIdentifiers:(id)a0;
- (id)description;
- (void)removeNodeIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)commitChangesToObservers:(id)a0 forNode:(id)a1;

@end
