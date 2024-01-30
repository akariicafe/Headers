@class NSString, NSMutableSet, NSSet;
@protocol NACancelable;

@interface HFMessageBatcher : NSObject {
    unsigned long long signpostID;
}

@property (retain, nonatomic) id<NACancelable> cancelable;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSMutableSet *mutableObjects;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *objects;
@property (readonly, nonatomic) double batchingInterval;

- (void).cxx_destruct;
- (void)reset;
- (void)batchObject:(id)a0;
- (id)initWithIdentifier:(id)a0 batchingInterval:(double)a1 block:(id /* block */)a2;

@end
