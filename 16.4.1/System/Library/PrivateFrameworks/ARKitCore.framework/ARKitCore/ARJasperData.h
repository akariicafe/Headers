@class NSString;

@interface ARJasperData : NSObject <ARData>

@property (nonatomic) double timestamp;
@property (nonatomic) struct __CVBuffer { } *dataBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 timestamp:(double)a1;

@end
