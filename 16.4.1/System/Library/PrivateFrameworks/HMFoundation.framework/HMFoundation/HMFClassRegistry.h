@class NSMutableDictionary;

@interface HMFClassRegistry : HMFObject {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSMutableDictionary *_classes;
}

@property (readonly, nonatomic) Class defaultClass;

- (void)setClass:(Class)a0 forKey:(id)a1;
- (id)init;
- (id)initWithDefaultClass:(Class)a0;
- (Class)classForKey:(id)a0;
- (void).cxx_destruct;

@end
