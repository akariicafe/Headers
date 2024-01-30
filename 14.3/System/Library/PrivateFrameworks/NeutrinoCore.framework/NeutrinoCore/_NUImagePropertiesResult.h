@class NSString;
@protocol NURenderStatistics, NUImageProperties;

@interface _NUImagePropertiesResult : _NURenderResult <NUImagePropertiesResult>

@property (retain) id<NUImageProperties> properties;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
