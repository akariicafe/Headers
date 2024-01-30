@interface PLAccountingQualificationEventForwardEntry : PLAccountingQualificationEventEntry

+ (id)entryKey;
+ (int)classDirectionality;
+ (void)load;

- (id)initWithQualificationID:(id)a0 withChildNodeNames:(id)a1 withStartDate:(id)a2;

@end
