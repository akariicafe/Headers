@class NSSet, NSMutableSet, REDonatedAction;

@interface _REActionValue : NSObject {
    NSMutableSet *_mutableUUIDs;
}

@property (readonly, nonatomic) REDonatedAction *action;
@property (readonly, nonatomic) NSSet *uuids;

- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)removeActionWithUUID:(id)a0;

@end
