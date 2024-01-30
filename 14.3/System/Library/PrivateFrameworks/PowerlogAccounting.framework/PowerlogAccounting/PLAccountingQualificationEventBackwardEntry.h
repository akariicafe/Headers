@interface PLAccountingQualificationEventBackwardEntry : PLAccountingQualificationEventEntry

+ (int)classDirectionality;
+ (void)load;
+ (id)entryKey;

- (id)initWithQualificationID:(id)a0 withChildNodeNames:(id)a1 withEndDate:(id)a2;

@end
