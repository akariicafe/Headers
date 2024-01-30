@protocol MTEnterEventHandlerDelegate;

@interface MTEnterEventHandler : MTStandardEventHandler

@property (weak, nonatomic) id<MTEnterEventHandlerDelegate> delegate;

- (id)knownFields;
- (id)eventType;
- (id)osLanguages:(id)a0;
- (id)eventVersion:(id)a0;

@end
