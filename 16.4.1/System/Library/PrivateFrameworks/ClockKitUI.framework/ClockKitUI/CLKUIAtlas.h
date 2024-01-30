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

- (id)backing;
- (void).cxx_destruct;
- (void)decrementInstanceCount;
- (void)incrementInstanceCount;
- (id)initWithUuid:(id)a0;

@end
