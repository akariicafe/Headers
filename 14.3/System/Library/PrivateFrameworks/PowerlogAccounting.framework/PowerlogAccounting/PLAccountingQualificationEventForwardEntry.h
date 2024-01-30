@interface PLAccountingQualificationEventForwardEntry : PLAccountingQualificationEventEntry

+ (int)classDirectionality;
+ (void)load;
+ (id)entryKey;

- (id)initWithQualificationID:(id)a0 withChildNodeNames:(id)a1 withStartDate:(id)a2;

@end
