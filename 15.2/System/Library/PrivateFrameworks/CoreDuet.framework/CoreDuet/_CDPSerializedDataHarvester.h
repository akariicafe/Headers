@class NSURL, NSString;

@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester>

@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadWithLimit:(unsigned long long)a0 dataPointReader:(id /* block */)a1 completion:(id /* block */)a2;

@end
