@class NSString;

@interface CLKUIAtlas : NSObject {
    _Atomic int _instanceCount;
}

@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) long long instanceCount;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (nonatomic) double boundTime;
@property (nonatomic) unsigned long long memoryCost;
@property (readonly) BOOL isPurgable;

- (void).cxx_destruct;
- (id)backing;
- (id)initWithUuid:(id)a0;
- (void)incrementInstanceCount;
- (void)decrementInstanceCount;

@end
