@class NSString;

@interface SRSTState : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ eventHandler;
}

@property (class, nonatomic, readonly) SRSTState *resting;
@property (class, nonatomic, readonly) SRSTState *responding;
@property (class, nonatomic, readonly) SRSTState *available;
@property (class, nonatomic, readonly) SRSTState *postResponse;
@property (class, nonatomic, readonly) SRSTState *disabled;
@property (class, nonatomic, readonly) SRSTState *analyzing;
@property (class, nonatomic, readonly) SRSTState *understanding;
@property (class, nonatomic, readonly) SRSTState *processing;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long hash;

- (id)makeProxy;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
