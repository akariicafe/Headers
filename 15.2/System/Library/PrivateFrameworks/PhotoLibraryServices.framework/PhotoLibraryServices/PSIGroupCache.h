@class NSMutableSet;
@protocol PSIGroupCacheDelegate;

@interface PSIGroupCache : NSObject {
    NSMutableSet *_groups;
    id<PSIGroupCacheDelegate> _delegate;
}

@property (readonly) unsigned long long numberOfGroupsChecked;
@property (readonly) unsigned long long numberOfGroupsQueried;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)idOfGroupWithText:(id)a0 identifier:(id)a1 category:(unsigned long long)a2 owningGroupId:(unsigned long long)a3 didUpdateGroup:(out BOOL *)a4;

@end
