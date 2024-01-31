@class NSString;

@interface ACNotifyWriter : NSObject <ACNotifyWriting> {
    int notifierToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)write:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end
