@class NSString;
@protocol CLKComplicationDataSource;

@interface NTKTimelineDataSourceWrapper : NSObject <TLTimelineDataSource>

@property (readonly, nonatomic) id<CLKComplicationDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
