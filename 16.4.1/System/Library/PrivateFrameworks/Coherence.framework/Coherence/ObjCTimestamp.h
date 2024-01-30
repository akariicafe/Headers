@class NSString, ObjCReplica;

@interface ObjCTimestamp : NSObject {
    void /* unknown type, empty encoding */ timestamp;
}

@property (nonatomic, readonly) ObjCReplica *replica;
@property (nonatomic, readonly) long long counter;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReplica:(id)a0 counter:(long long)a1;

@end
