@interface CPDistributedMessagingCallout : NSObject {
    BOOL _returnsVoidIsValid;
}

@property (readonly, retain, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) BOOL returnsVoid;

- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)dealloc;

@end
