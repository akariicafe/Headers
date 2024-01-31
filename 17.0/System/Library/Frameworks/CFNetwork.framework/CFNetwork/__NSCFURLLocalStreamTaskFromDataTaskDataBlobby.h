@class NSObject;
@protocol OS_dispatch_data;

@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject <NSCopying> {
    NSObject<OS_dispatch_data> *_remainingData;
    id /* block */ _completion;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
