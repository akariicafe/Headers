@class EKEventStore;

@interface EKEventStoreWeakWrapper : NSObject {
    void *_unsafeRawPointer;
    EKEventStore *_weakEventStore;
}

@property (readonly, nonatomic) EKEventStore *weakEventStore;
@property (readonly, nonatomic) void *unsafeRawPointer;

- (id)initWithEventStore:(id)a0;
- (void).cxx_destruct;

@end
