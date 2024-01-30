@class NSString;

@interface MFNullDataConsumer : NSObject <MFDataConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done;
- (long long)appendData:(id)a0;

@end
