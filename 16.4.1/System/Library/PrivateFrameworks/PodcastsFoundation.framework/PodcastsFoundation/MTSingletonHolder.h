@interface MTSingletonHolder : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id instance;

- (void).cxx_destruct;

@end
