@protocol BMStoreData;

@interface BMStoreTypedEvent : BMStoreEvent

@property (readonly, nonatomic) id<BMStoreData> eventBody;

@end
