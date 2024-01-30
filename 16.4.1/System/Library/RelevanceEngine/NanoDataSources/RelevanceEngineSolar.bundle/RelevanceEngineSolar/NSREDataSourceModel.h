@class NSArray, NSString;

@interface NSREDataSourceModel : NSObject <NSREDataSourceModelType>

@property (readonly, nonatomic) NSArray *events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (id)initWithDelegate:(id)a0;
- (void)resume;

@end
