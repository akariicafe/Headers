@interface EKExceptionDateChange : EKObjectChange

+ (int)entityType;
+ (void)fetchExceptionDateChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchExceptionDateChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchExceptionDateChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (id)initWithChangeProperties:(id)a0;

@end
