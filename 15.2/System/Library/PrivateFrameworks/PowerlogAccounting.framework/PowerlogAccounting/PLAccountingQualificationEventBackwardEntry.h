@interface PLAccountingQualificationEventBackwardEntry : PLAccountingQualificationEventEntry

+ (id)entryKey;
+ (int)classDirectionality;
+ (void)load;

- (id)initWithQualificationID:(id)a0 withChildNodeNames:(id)a1 withEndDate:(id)a2;

@end
