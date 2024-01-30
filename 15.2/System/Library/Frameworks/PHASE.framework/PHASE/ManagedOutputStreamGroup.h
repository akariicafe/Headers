@class NSMutableDictionary;

@interface ManagedOutputStreamGroup : NSObject

@property (nonatomic, getter=isControlled) BOOL controlled;
@property (retain, nonatomic) NSMutableDictionary *streams;
@property (copy, nonatomic) id /* block */ stateChangeBlock;

- (void).cxx_destruct;
- (id)init;

@end
