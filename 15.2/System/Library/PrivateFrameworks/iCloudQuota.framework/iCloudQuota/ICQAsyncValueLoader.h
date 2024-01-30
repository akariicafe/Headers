@interface ICQAsyncValueLoader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _valueLock;
}

@property (copy, nonatomic) id /* block */ fetchValue;
@property (retain, nonatomic) id value;
@property (copy, nonatomic) id /* block */ didUpdate;

- (void).cxx_destruct;
- (id)initWithDefaultValue:(id)a0 valueFetcher:(id /* block */)a1;
- (void)fetchValueAsynchronously;

@end
