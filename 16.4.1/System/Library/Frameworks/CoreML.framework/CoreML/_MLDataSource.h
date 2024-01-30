@class NSDictionary, NSString;

@interface _MLDataSource : NSObject <ETDataProvider>

@property (retain, nonatomic) NSDictionary *dataTensorDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
