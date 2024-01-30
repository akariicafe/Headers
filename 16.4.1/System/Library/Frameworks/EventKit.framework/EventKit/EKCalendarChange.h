@interface EKCalendarChange : EKObjectChange

@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) BOOL colorChanged;
@property (readonly, nonatomic) BOOL orderChanged;

+ (int)entityType;

- (id)initWithChangeProperties:(id)a0;

@end
