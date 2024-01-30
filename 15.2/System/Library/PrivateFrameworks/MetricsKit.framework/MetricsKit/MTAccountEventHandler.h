@protocol MTAccountEventHandlerDelegate;

@interface MTAccountEventHandler : MTStandardEventHandler

@property (weak, nonatomic) id<MTAccountEventHandlerDelegate> delegate;

- (id)type:(id)a0;
- (id)knownFields;
- (id)eventType;
- (id)eventVersion:(id)a0;

@end
