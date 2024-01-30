@class NSString, MSPContainer;
@protocol NSObject, NSCopying;

@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken> {
    MSPContainer *_container;
    id<NSObject, NSCopying> _context;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContainerOwner:(id)a0 context:(id)a1;
- (void)endCoalescingEdits;

@end
