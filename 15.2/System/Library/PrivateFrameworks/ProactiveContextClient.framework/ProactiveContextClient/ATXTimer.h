@class NSObject;
@protocol OS_dispatch_source;

@interface ATXTimer : NSObject {
    NSObject<OS_dispatch_source> *_source;
}

+ (id)fireAtDate:(id)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDate:(id)a0 block:(id /* block */)a1;

@end
