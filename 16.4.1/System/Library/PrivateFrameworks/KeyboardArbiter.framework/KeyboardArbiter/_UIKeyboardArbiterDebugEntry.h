@class NSDate;

@interface _UIKeyboardArbiterDebugEntry : NSObject {
    NSDate *_timestamp;
}

@property (readonly) int importance;

- (void)enumerateContents:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
