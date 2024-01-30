@class NSString;

@interface SCROIOSerialElement : SCROIOElement <SCROIOSerialElementProtocol>

@property (nonatomic) int fileDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)transport;
- (id)initWithFileDescriptor:(int)a0;

@end
