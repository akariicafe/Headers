@class NSString;

@interface ISSymbolImageDescriptor : NSObject <ISImageDescriptor>

@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long size;
@property (nonatomic) long long weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
