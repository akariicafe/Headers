@class NSObject;
@protocol OS_dispatch_queue, HSModelDelegate;

@interface HSModel : NSObject {
    id<HSModelDelegate> delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (BOOL)getHSModelForEngineMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 numHSModels:(unsigned long long)a2 modelBuffer:(char *)a3 length:(unsigned long long)a4;

@end
