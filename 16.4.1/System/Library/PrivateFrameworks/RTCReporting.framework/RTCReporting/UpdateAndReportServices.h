@interface UpdateAndReportServices : NSObject

@property (readonly) BOOL update;
@property (readonly) BOOL report;
@property (copy) id /* block */ block;

- (void)dealloc;
- (id)initWithServices:(BOOL)a0 needToReport:(BOOL)a1 service:(id /* block */)a2;

@end
