@class NSString;

@interface ISSymbolImageDescriptor : IFSymbolImageDescriptor <ISImageDescriptor>

@property (nonatomic) unsigned long long size;
@property (nonatomic) long long weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
