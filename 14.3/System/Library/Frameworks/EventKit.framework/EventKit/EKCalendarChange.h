@interface EKCalendarChange : EKObjectChange

@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) BOOL colorChanged;
@property (readonly, nonatomic) BOOL orderChanged;

+ (int)entityType;
+ (void)fetchCalendarChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchCalendarChangesInSource:(id)a0 resultHandler:(id /* block */)a1;

- (id)initWithChangeProperties:(id)a0;

@end
