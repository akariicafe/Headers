@class NSString, NSDate;

@interface NPKDateRange : NSObject <NPKDateRange>

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSString *startDateString;
@property (readonly, nonatomic) NSString *expiryDateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateStringWithDate:(id)a0 style:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 expirationDate:(id)a1 formatterStyle:(unsigned long long)a2;

@end
