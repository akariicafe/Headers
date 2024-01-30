@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject {
    CommunicationFilterItem *_filterItem;
}

@property (nonatomic) long long isInList;

- (BOOL)matchesItem:(id)a0;
- (void)dealloc;
- (id)initWithFilterItem:(id)a0 isInList:(long long)a1;

@end
